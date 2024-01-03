/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:51:07 by romvan-d          #+#    #+#             */
/*   Updated: 2023/12/31 11:16:38 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
: IMateriaSource(), 
{
	for (int i = 0; i < 4; i++)
	{
		this->knownMaterias[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource & other)
: IMateriaSource(other),
{
	for (int i = 0; i < 4; i++)
	{
		this->knownMaterias[i] = other.knownMaterias[i]->clone();
	}
	return ;
}

MateriaSource::~MateriaSource()
: IMateriaSource(), 
{
	for (int i = 0; i < 4; i++)
	{
		delete this->knownMaterias[i];
	}
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i++)
	{
		this->knownMaterias[i] = rhs.knownMaterias[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria * newMateria)
{	
	for (int i = 0; i < 4; i++)
	{
		if (!knownMaterias[i])
		{
			knownMaterias[i] = newMateria;
			return ;
		}
	}
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if(this->knownMaterias[i] && this->knownMaterias[i]->getType() == type)
		{
			AMateria *retvalue = this->knownMaterias[i]->clone();
			return (retvalue);
		}
	}
	return ;
}
