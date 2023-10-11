/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:46:39 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/11 12:17:06 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
	
Fixed::Fixed(void)
{
	this->number = 0;
	return ;
}
Fixed::Fixed(const int number) : number(number)
{
	this->number = this->number << this->fractionalBits;
	return ;
}

Fixed::Fixed(const float number) : number(number)
{
	this->number = roundf(number * (1 << this->fractionalBits));
	return ;
}
Fixed::Fixed(Fixed const & src)
{
	this->number = src.getRawBits();
	return ;
}

Fixed::~Fixed(void)
{
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
	return ((float) this->number / (1 << this->fractionalBits));
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
	return this->number + rhs.getRawBits();
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return this->number - rhs.getRawBits();
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return this->toFloat() * rhs.toFloat();
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	if (!rhs.number)
		return (Fixed( -8388610 ));
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
