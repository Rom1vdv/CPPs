/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:58:46 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/27 14:17:29 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	WhichMod[0] = &Harl::debug;
	WhichMod[1] = &Harl::info;
	WhichMod[2] = &Harl::warning;
	WhichMod[3] = &Harl::error;
	std::cout << "Harl constructor has been called" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Harl destructor has been called" << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. \
You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void	Harl::complain(std::string Level)
{
	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; ++i)
	{
		if (level[i].compare(Level) == 0)
		{
			(this->*WhichMod[i])();
			return ;
		}
	}
	std::cout << "Sorry couldnt find a match for :" << Level << std::endl;
}