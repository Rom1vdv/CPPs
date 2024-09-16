/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:02:40 by romvan-d          #+#    #+#             */
/*   Updated: 2024/09/09 13:40:07 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Default] Brain Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "";
	}
	return ;
}

Brain::Brain(Brain const & other)
{
	std::cout << "[Copy] Brain Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index > 99 )
		return "out of bound";
	return this->ideas[index];
}

void	Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index > 99 )
	{
		std::cout << "out of brain range" << std::endl;
		return ;
	}
	this->ideas[index] = idea;
}