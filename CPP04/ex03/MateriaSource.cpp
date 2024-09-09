/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:51:07 by romvan-d          #+#    #+#             */
/*   Updated: 2024/09/09 14:50:23 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
: IMateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->knownMaterias[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource & other)
: IMateriaSource(other)
{
	for (int i = 0; i < 4; i++)
	{
		this->knownMaterias[i] = other.knownMaterias[i]->clone();
	}
	return ;
}

MateriaSource::~MateriaSource()
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
		delete this->knownMaterias[i];
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
	return NULL;
}
