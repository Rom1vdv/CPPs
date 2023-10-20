/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:50:45 by rom1              #+#    #+#             */
/*   Updated: 2023/10/20 23:57:16 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
: WrongAnimal()
{
	std::cout << "[Default] WrongCat Constructor called" << std::endl;
	this->type = "Well I am not a freaking cat OwO";
	return ;
}

WrongCat::WrongCat(WrongCat const & other)
: WrongAnimal() // do i need to put other in the construtor?
{
	std::cout << "[Copy] WrongCat Constructor called" << std::endl;
	this->type = other.type;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->type = rhs.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Woof woof beeeeeeeeeeeeeeeeeeeeeh Woof" << std::endl;
	return ;
}
