/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:15:01 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/09 18:09:56 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	return ;
}

ClapTrap::ClapTrap(std::string Name) : name(Name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	return ;
}

ClapTrap::~ClapTrap()
{
	return ;
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout 
	}
}