/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:12:39 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/28 20:10:04 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(int number);
		Fixed(Fixed const & number);
		~Fixed(void);
		
		/* Operator overload */
		Fixed & operator=(Fixed const & rhs);
	
		/* Methods */
		
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		
	private :
	
		int number;
		const static int fractionalBits = 8;
};

#endif