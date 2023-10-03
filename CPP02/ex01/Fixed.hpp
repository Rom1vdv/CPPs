/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:12:39 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/03 18:31:53 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		Fixed(Fixed const & number);
		~Fixed(void);
		
		/* Operator overload */
		Fixed & operator=(Fixed const & rhs);
	
		/* Methods */
		
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
	private :
	
		int number;
		const static int fractionalBits = 8;
};

// std::ostream & operator<<(std::ostream & output, Fixed const & rhs);

#endif