/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:35:11 by rom1              #+#    #+#             */
/*   Updated: 2024/07/18 17:31:10 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
: Animal()
{
	std::cout << "[Default] Dog Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(Dog const & other)
{
	std::cout << "[Copy] Dog Constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain (*(other.brain));
	return ; 
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->type = rhs.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark Bark Bark" << std::endl;
	return ;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}