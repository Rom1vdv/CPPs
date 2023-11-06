/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:22:42 by romvan-d          #+#    #+#             */
/*   Updated: 2023/11/06 17:01:20 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
: ICharacter(), name("default")
{
	for (int i = 0; i < 4; i++)
	{
		slot[i] = NULL;
	}
	return ;
}

Character::Character(std::string const & name)
: ICharacter(), name(name)
{
	for (int i = 0; i < 4; i++)
	{
		slot[i] = NULL;
	}
	return ;
}

Character::Character(Character const & other)
: ICharacter(), name(other.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.slot[i])
			slot[i] = other.slot[i]->clone();
		else
			slot[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->slot[i];
	}
	return ;
}

Character & Character::operator=(Character const & other)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->slot[i];
		if (other.slot[i])
			slot[i] = other.slot[i]->clone();
		else
			slot[i] = NULL;
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria * materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->slot[i])
		{
			this->slot[i] = materia;
			return ;
		}
	}
	std::cout << "Full inventory" << std::endl;
}

void	Character::unequip(int index)
{
	if (index >= 0 && index < 4 && this->slot[index])
	{
		this->slot[index] = NULL;
		return ;
	}
	std::cout << "Wrong index" << std::endl;
}

void Character::use(int index, ICharacter & target)
{
	if (index >= 0 && index < 4 && this->slot[index])
	{	
		this->slot[index]->use(target);
		return ;
	}
	std::cout << "Cannot use Materia at " << index << std::endl;
}