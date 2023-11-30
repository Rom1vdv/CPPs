/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:51:07 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/27 16:42:20 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	return ;
}

MateriaSource::MateriaSource(MateriaSource & other)
{
	return ;
}

MateriaSource::~MateriaSource()
{
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i++)
	{
		
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria * newMateria)
{
	AMateria *copyMateria = new AMateria(newMateria);
	
	for (int i = 0; i < 4; i++)
	{
		if (!knownMaterias[i])
		{
			knownMaterias[i] = copyMateria;
		}
	}
	return ;
}

AMateria * createMateria(std::string const & type)
{
	
}
