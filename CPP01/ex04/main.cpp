/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:17:47 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/22 18:25:14 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

int	ParseArgs(int ac, char **av)
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

int	BrowseFile(std::ifstream InputFile)
{
	
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
	return (0);
}
