/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:37:02 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/11 18:31:14 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "[Default] ScavTrap constructor called " << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string Name) : name(Name)
{
	std::cout << "[Parametric] ScavTrap constructor called " << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "[Copy Constructor] ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return *this;
}

void	ScavTrap::guardGuate()
{
	std::cout << "ScavTrap " << this->name << " is in GateKeeper Mode." << std::endl;
}