/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:33:36 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/06 13:52:57 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	return ;
}

AMateria::AMateria(std::string const & type)
: type(type)
{
	return ;
}

AMateria::AMateria(AMateria const & other)
: type(other.type)
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	(void) rhs;
	return *this;
}

void	AMateria::use(ICharacter & target)
{
	(void) target;
	std::cout << "Shouldnt be used" << std::endl;
	return ;
}