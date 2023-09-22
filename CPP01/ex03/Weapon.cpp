/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:33:45 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/22 15:43:53 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << "Weapon constructor has been called" << std::endl;
	return ;
}

Weapon::Weapon(void)
{
	std::cout << "Weapon constructor has been called" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor has been called" << std::endl;
	return ;
}

void	Weapon::setType(std::string NewType)
{
	this->type = NewType;
}

std::string const & Weapon::getType(void) const
{
	return this->type;
}