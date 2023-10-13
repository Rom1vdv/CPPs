/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:37:02 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/13 14:13:44 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "[Default] ScavTrap constructor called " << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap()
{
	std::cout << "[Parametric] ScavTrap constructor called " << std::endl;
	this->name = Name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
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

void	ScavTrap::setHitPoints(unsigned int amount)
{
	this->hitPoints = amount;
}

void	ScavTrap::guardGuate()
{
	std::cout << "ScavTrap " << this->name << " is in GateKeeper Mode." << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->name << "cannot do anything because he depleted his energy" << std::endl;
		return ;
	}
	if (this->hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->name << " cannot do anything because he lost all his health points" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << " WITH PASSION, causing " << this->attackDamage << " points of damage !" << std::endl;
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " has " << this->energyPoints << " energy points left" << std::endl;
}