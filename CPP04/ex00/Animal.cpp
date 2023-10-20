/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:38:51 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/20 17:57:04 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
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

Animal & operator=(Animal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

virtual void	makeSound(void) const
{
	
}