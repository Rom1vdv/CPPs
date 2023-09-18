/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:47:26 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/18 14:33:22 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie constructor called" << std::endl;
	return ;
}
Zombie::Zombie(std::string Name) : Name(Name)
{
	std::cout << "Zombie constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie destructor called" << std::endl;
	return ;
}

void	Zombie::SetName(std::string Name)
{
	this->Name = Name;
}

std::string Zombie::GetName(void) const
{
	return this->Name;
}

void	Zombie::announce(void) const
{
	std::cout << this->GetName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
