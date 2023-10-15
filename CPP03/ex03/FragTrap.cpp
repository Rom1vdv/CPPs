/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:51:58 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/15 21:45:44 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap(), name("Default"), hitPoints(100), energyPoints(100), attackDamage(30)
{
	std::cout << "[Default] FragTrap constructor called " << std::endl;	
	return ;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(), name(name), hitPoints(100), energyPoints(100), attackDamage(30)
{
	std::cout << "[Default] FragTrap constructor called " << std::endl;	
	return ;
}

FragTrap::FragTrap(FragTrap const & other)
: ClapTrap(), name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Would you agree to high five my cute person? UwU" << std::endl;
	return ;
}