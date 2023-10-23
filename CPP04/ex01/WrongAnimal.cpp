/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:31:54 by rom1              #+#    #+#             */
/*   Updated: 2023/10/20 23:41:42 by rom1             ###   ########.fr       */
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
	std::cout << "Wrong Animal Destructor called" << std::endl;
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