/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:12:39 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/25 14:59:33 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		Fixed(Fixed const & number);
		~Fixed(void);
		
		/* Operator overload assignment */
		
		Fixed & operator=(Fixed const & rhs);

		/* Overload comparison */
		
		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		/* Overload Arithmetic operation */
		
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;

		/* Overload increment/decrement operators */

		Fixed & operator++();
		Fixed & operator--();
		Fixed 	operator++(int);
		Fixed 	operator--(int);
		/* Methods */
		
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		static Fixed & min(Fixed & firstValue, Fixed & secondValue);
		static const Fixed & min(Fixed const & firstValue, Fixed const & secondValue);
		static Fixed & max(Fixed & firstValue, Fixed & secondValue);
		static const Fixed & max(Fixed const & firstValue, Fixed const & secondValue);
		
	private :
	
		int number;
		const static int fractionalBits = 8;
};

std::ostream & operator<<(std::ostream & output, Fixed const & rhs);

#endif