/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:44:01 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/02 16:08:18 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
: AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const & other)
: AMateria("cure")
{
	(void) other;
}

Cure::~Cure()
{
	return ;
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 
	return ;
}

Cure & Cure::operator=(Cure const & rhs)
{
	(void) rhs;
	return (*this);
}

AMateria *	Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}