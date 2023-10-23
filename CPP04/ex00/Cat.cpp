/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:05:18 by rom1              #+#    #+#             */
/*   Updated: 2023/10/23 13:27:00 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
: Animal()
{
	std::cout << "[Default] Cat Constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(Cat const & other)
{
	std::cout << "[Copy] Cat Constructor called" << std::endl;
	this->type = other.type;
	return ; 
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meowdy" << std::endl;
	return ;
}
