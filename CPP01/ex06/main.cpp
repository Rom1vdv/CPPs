/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:51:03 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/27 14:47:03 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static int	ParseInput(char **av)
{
	std::string Argument = av[1];
	Mods WhichMod = WRONG;
	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; ++i)
	{
		if (level[i].compare(Argument) == 0)
		{
			WhichMod = (Mods)i;
			return WhichMod;
		}
	}
	return WhichMod;
}

static void	DecideMod(int Mod, Harl &NewHarl)
{
	switch (Mod)
	{
		case DEBUG:
			NewHarl.complain("DEBUG");
		case INFO:
			NewHarl.complain("INFO");	
		case WARNING:
			NewHarl.complain("WARNING");	
		case ERROR:
			NewHarl.complain("ERROR");
			break;
		default :
			std::cout << "Sorry the input you entered is invalid :( " << std::endl;
		
	}
}

int main(int ac, char **av)
{
	int	Mod;
	if (ac != 2)
	{
		std::cout << "Please enter the right amount of arguments" << std::endl;
		return (1);
	}
	Harl NewHarl;
	Mod = ParseInput(av);
	DecideMod(Mod, NewHarl);
	return 0;
}