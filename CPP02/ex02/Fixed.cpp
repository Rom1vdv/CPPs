/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:46:39 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/25 17:11:37 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
	
Fixed::Fixed(void)
{
	// std::cout << "Fixed constructor called" << std::endl;
	this->number = 0;
	return ;
}
Fixed::Fixed(const int number)
{
	// std::cout << "Parametric Fixed [Int] constructor called" << std::endl;
	this->number = number << this->fractionalBits;
	return ;
}

Fixed::Fixed(const float number) : number(number)
{
	// std::cout << "Parametric Fixed [Float] constructor called" << std::endl;
	this->number = roundf(number * (1 << this->fractionalBits));
	return ;
}
Fixed::Fixed(Fixed const & src)
{
	// std::cout << "Copy Constructor called" << std::endl;
	this->number = src.getRawBits();
	return ;
}

Fixed::~Fixed(void)
{
	// std::cout << "Fixed destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	this->number = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return this->number;
}

void	Fixed::setRawBits(const int raw)
{
	this->number = raw;
}

float Fixed::toFloat(void) const
{
	return ((float) (this->number) / (1 << this->fractionalBits));
}

int	Fixed::toInt(void) const
{
	return this->number >> this->fractionalBits;
}

std::ostream & operator<<(std::ostream & output, Fixed const & rhs)
{
	output << rhs.toFloat();
	return output;
}

bool Fixed::operator>(Fixed const & rhs) const
{
	if (this->number > rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(Fixed const & rhs) const
{
	if (this->number < rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	if (this->number >= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	if (this->number <= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const & rhs) const
{
	if (this->number == rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	if (this->number != rhs.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return this->toFloat() * rhs.toFloat();
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return this->toFloat() / rhs.toFloat();
}

Fixed & Fixed::operator++()
{
	++this->number;
	return *this;
}

Fixed & Fixed::operator--()
{
	--this->number;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed NewObject = *this;
	this->operator++();
	return NewObject;
}

Fixed Fixed::operator--(int)
{
	Fixed NewObject = *this;
	this->operator--();
	return NewObject;
}

Fixed & Fixed::min(Fixed & firstValue, Fixed & secondValue)
{
	if(firstValue.getRawBits() > secondValue.getRawBits())
		return secondValue;
	return firstValue;
}
const Fixed & Fixed::min(Fixed const & firstValue, Fixed const & secondValue)
{
	if(firstValue.getRawBits() > secondValue.getRawBits())
		return secondValue;
	return firstValue;
}

Fixed & Fixed::max(Fixed & firstValue, Fixed & secondValue)
{
	if(firstValue.getRawBits() < secondValue.getRawBits())
		return secondValue;
	return firstValue;
}

const Fixed & Fixed::max(Fixed const & firstValue, Fixed const & secondValue)
{
	if(firstValue.getRawBits() < secondValue.getRawBits())
		return secondValue;
	return firstValue;
}