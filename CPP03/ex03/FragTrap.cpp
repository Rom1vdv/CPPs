/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:51:58 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/20 16:10:17 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "[Default] FragTrap constructor called " << std::endl;	
	return ;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "[Default] FragTrap constructor called " << std::endl;	
	return ;
}

FragTrap::FragTrap(FragTrap const & other)
: ClapTrap(other.name)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "[Copy Constructor] FragTrap constructor called " << std::endl;	
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return *this;
}

void	FragTrap::setHitPoints(unsigned int amount)
{
	this->hitPoints = amount;
}

std::string FragTrap::getName() const
{
	return this->name;
}

unsigned int FragTrap::getHitPoints() const
{
	return this->hitPoints;
}

unsigned int FragTrap::getEnergyPoints() const
{
	return this->energyPoints;
}

unsigned int FragTrap::getAttackDamage() const
{
	return this->attackDamage;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "FragTrap " << this->name << "cannot do anything because he depleted his energy" << std::endl;
		return ;
	}
	if (this->hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->name << " cannot do anything because he lost all his health points" << std::endl;
		return ;
	}
	std::cout << "FragTrap : Would you agree to high five my cute person? UwU" << std::endl;
	return ;
}