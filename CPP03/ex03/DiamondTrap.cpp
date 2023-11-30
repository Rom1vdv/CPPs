/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:08:04 by rom1              #+#    #+#             */
/*   Updated: 2023/11/20 16:29:51 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap()
{
	this->name = "Default";
	ClapTrap::name = this->ClapTrap::name.append("_clap_name");
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), name(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const & other)
{
	this->name = other.name;
	this->ClapTrap::name = other.ClapTrap::name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	
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
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Name : " << this->DiamondTrap::name << std::endl;
	std::cout << "ClapTrap Name : " << this->ClapTrap::name << std::endl;
}