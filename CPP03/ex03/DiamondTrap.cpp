/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:08:04 by rom1              #+#    #+#             */
/*   Updated: 2023/10/20 15:50:00 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap(), ScavTrap(), FragTrap() 
{
	this->name = "Default";
	ClapTrap::name = this->ClapTrap::name.append("_clap_name");
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string Name)
: ClapTrap(Name), ScavTrap(), FragTrap(), name(Name)
{
	ClapTrap::name = this->ClapTrap::name.append("_clap_name");
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const & other)
{
	this->name = other.name;
	this->ClapTrap::name = other.ClapTrap::name;
	this->FragTrap::hitPoints = other.FragTrap::hitPoints;
	this->ScavTrap::energyPoints = other.ScavTrap::energyPoints;
	this->FragTrap::attackDamage = other.FragTrap::attackDamage;
	
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] destructor called" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{	
	this->name = rhs.name;
	this->ClapTrap::name = rhs.ClapTrap::name;
	this->FragTrap::hitPoints = rhs.FragTrap::hitPoints;
	this->ScavTrap::energyPoints = rhs.ScavTrap::energyPoints;
	this->FragTrap::attackDamage = rhs.FragTrap::attackDamage;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Name : " << this->DiamondTrap::name << std::endl;
	std::cout << "ClapTrap Name : " << ClapTrap::name << std::endl;
}k