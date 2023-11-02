/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:32:47 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/02 16:33:46 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
: AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const & other)
: AMateria("ice")
{
	(void) other;
}

Ice::~Ice()
{
	return ;
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl; 
	return ;
}

Ice & Ice::operator=(Ice const & rhs)
{
	(void) rhs;
	return (*this);
}

AMateria *	Ice::clone() const
{
	Ice *clone = new Ice(*this);
	return (clone);
}