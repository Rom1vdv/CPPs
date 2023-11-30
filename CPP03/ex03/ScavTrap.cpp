/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:37:02 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/20 16:10:21 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "[Default] ScavTrap constructor called " << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "[Parametric] ScavTrap constructor called " << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & other)
: ClapTrap(other.name)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
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

std::string ScavTrap::getName() const
{
	return this->name;
}

unsigned int ScavTrap::getHitPoints() const
{
	return this->hitPoints;
}

unsigned int ScavTrap::getEnergyPoints() const
{
	return this->energyPoints;
}

unsigned int ScavTrap::getAttackDamage() const
{
	return this->attackDamage;
}

void	ScavTrap::guardGuate()
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