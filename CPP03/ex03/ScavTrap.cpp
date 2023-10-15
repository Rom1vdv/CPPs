/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:37:02 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/15 21:47:25 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap(), name("Default"), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "[Default] ScavTrap constructor called " << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string Name)
: ClapTrap(), name(Name), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "[Parametric] ScavTrap constructor called " << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & other)
: ClapTrap(), name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
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