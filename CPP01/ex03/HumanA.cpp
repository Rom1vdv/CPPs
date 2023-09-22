/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:08:05 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/22 15:54:44 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon& WeaponType) : Name(Name), WeaponType(WeaponType)
{
	std::cout << "HumanA constructor has been called" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destructor has been called" << std::endl;
	return ;
}

void	HumanA::SetName(std::string Name)
{
	this->Name = Name;
}

std::string	HumanA::GetName(void) const
{
	return this->Name;
}

void	HumanA::SetWeapon(Weapon WeaponType)
{
	this->WeaponType = WeaponType;
}

std::string HumanA::GetWeapon(void) const
{
	return this->WeaponType.getType();
}

void	HumanA::attack(void) const
{
	std::cout << this->GetName() << " attacks with their " << this->GetWeapon() << std::endl;
}