/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:38:51 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/20 22:09:01 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("default")
{
	std::cout << "Animal [Default] Constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const & other) : type(other.type)
{
	std::cout << "Animal [Copy] Constructor called" << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	
}

std::string Animal::getType() const
{
	return this->type;
}