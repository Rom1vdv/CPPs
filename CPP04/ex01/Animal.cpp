/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:38:51 by romvan-d          #+#    #+#             */
/*   Updated: 2024/09/09 14:15:16 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

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

Brain * Animal::getBrain() const
{
	return NULL;
}