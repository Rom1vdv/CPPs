	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:15:01 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/11 18:22:12 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "[Default] ClapTrap constructor called " << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string Name) : name(Name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "[Parametric] ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "[Copy Constructor] ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{	
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->name = rhs.name;
	this->attackDamage = rhs.attackDamage;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	return *this;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	unsigned int tmp = this->attackDamage;
	
	if (this->hitPoints != 0)
	{
		this->attackDamage = amount;
		std::cout << "ClapTrap " << this->name << " attack damage went from " << tmp << " to " << this->attackDamage << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attack damage cannot be modified because he's dead" << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << "cannot do anything because he depleted his energy" << std::endl;
		return ;
	}
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " cannot do anything because he lost all his health points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << std::endl;
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " has " << this->energyPoints << " energy points left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << "cannot do anything because he depleted his energy" << std::endl;
	}
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << "cannot do anything because he lost all his health points" << std::endl;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " has regained " << amount << " hitpoints" << std::endl;
	std::cout << "ClapTrap " << this->name << " has " << this->energyPoints << " energy points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead and cannot take more damage (;´༎ຶٹ༎ຶ`)" << std::endl;
		return ;
	}
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " has lost " << amount << " hitpoints" << std::endl;
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has died, R.I.P" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " has " << this->hitPoints << " hitpoints left" << std::endl;
}