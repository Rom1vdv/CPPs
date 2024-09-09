/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:31:54 by rom1              #+#    #+#             */
/*   Updated: 2024/07/18 15:20:34 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: type("I am a monkey oug oug")
{
	std::cout << "[Default] WrongAnimal Constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & other)
{
	std::cout << "[Copy] WrongAnimal Constructor called" << std::endl;
	this->type = other.type;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->type = rhs.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	
}

std::string WrongAnimal::getType() const
{
	return this->type;
}