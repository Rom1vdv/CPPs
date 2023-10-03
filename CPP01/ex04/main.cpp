/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:17:47 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/28 17:38:25 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

static int	ParseArgs(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error : Wrong amount of arguments" << std::endl;
		return (1);
	}
	if (!av[1] || std::string(av[1]).empty())
	{
		std::cout << "Error : Output file formatting is wrong" << std::endl;
		return (1);
	}
	if (!av[2] || !av[3])
	{
		return (1);
	}
	return (0);
}

static std::string	ReplaceOccurenceInString(std::string &ToReplace, std::string &Replace, std::string &String)
{
	size_t	j = 0;
	
	for (size_t i = 0; i < String.size(); i++)
	{
		j = 0;
		while (String[i + j] == ToReplace[j])
		{
			if(ToReplace[j + 1] == '\0')
			{
				String.erase(i, ToReplace.size());
				String.insert(i, Replace);
			}
			++j;
		}
	}
	return String;

}

static int	BrowseFile(std::ifstream& InputFile, std::ofstream& NewFile, char **av)
{
	std::string CurrentLine;
	std::string ToReplace = av[2];
	std::string Replace = av[3];
	while(getline(InputFile, CurrentLine))
	{
		NewFile << ReplaceOccurenceInString(ToReplace, Replace, CurrentLine) << std::endl;
	}	
	return (0);
}

int main (int ac, char **av)
{
	if (ParseArgs(ac, av) == 1)
	{
		return (1);
	}
	std::string FileName = av[1];
	std::ifstream MyFile(av[1]);
	if (!MyFile.is_open())
	{
		std::cout << "Error : File failed to open" << std::endl;
		return (1);
	}
	std::ofstream NewFile(FileName.append(".replace"));
	if (!NewFile.is_open())
	{
		std::cout << "Error : File failed to open" << std::endl;
		return (1);
	}
	BrowseFile(MyFile, NewFile, av);
	return (0);
}
