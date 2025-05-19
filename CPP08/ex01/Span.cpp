/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:08:20 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/12 13:56:59 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
: size(0)
{}

Span::Span(unsigned int size)
: size(size)
{}

Span::Span(Span const & other)
{
	this->size = other.size;
	this->holder = other.holder;
}

Span::~Span()
{}

Span & Span::operator=(Span const & rhs)
{
	this->size = rhs.size;
	this->holder = rhs.holder;
	return (*this);
}

void	Span::addNumber(int value)
{
	if (holder.size() == size)
		throw NoSpaceLeftException();
	else
		holder.push_back(value);
}

unsigned int	Span::shortestSpan()
{
	unsigned int threshhold = UINT_MAX;
	if (holder.size() < 2)
		throw NotEnoughValuesException();
	
	std::vector<int> sortedHolder = holder;
	sort(sortedHolder.begin(), sortedHolder.end());

	for (size_t i=0; i < sortedHolder.size() - 1; i++)
	{
		unsigned int diff = sortedHolder[i + 1] - sortedHolder[i];
		if(diff < threshhold)
			threshhold = diff;
	}
	return threshhold;
}

unsigned int Span::longestSpan()
{
	if (holder.size() < 2)
		throw NotEnoughValuesException();
	std::vector<int>::iterator min = std::min_element(this->holder.begin(), this->holder.end());
	std::vector<int>::iterator max = std::max_element(this->holder.begin(), this->holder.end());
	return (*max - *min);
}

void	Span::addMultiple(std::vector<int>::iterator & begin, std::vector<int>::iterator & end)
{
	unsigned int range = std::distance(begin, end);
	if (holder.size() + range > size)
		throw NoSpaceLeftException();
	this->holder.insert(this->holder.begin(), begin, end);
}

const char* Span::NoSpaceLeftException::what() const throw()
{
	return("No place left.");
}

const char* Span::NotEnoughValuesException::what() const throw() 
{
	return("Not enough values in vector.");
}