/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:28:21 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/19 18:34:50 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << "HumanB constructor has been called" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destructor has been called" << std::endl;
	return ;
}

void	HumanB::SetWeapon(Weapon WeaponType)
{
	this->WeaponType = WeaponType;
}

void	HumanB::SetName(std::string Name)
{
	this->Name = Name;
}

std::string HumanB::GetWeapon(void) const
{
	return this->WeaponType.getType();
}

std::string HumanB::GetName(void) const
{
	return this->Name;
}

void	HumanB::attack(void) const
{
	std::cout << this->GetName() << " attacks with their " << this->GetWeapon() << std::endl;
}