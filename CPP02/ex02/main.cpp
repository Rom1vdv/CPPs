/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:34:32 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/25 17:17:01 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


#include <iostream>

int main( void ) 
{
	Fixed a = 3.05f;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c = 4.07f;
	
	std::cout << "Test sur a" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl << std::endl;

	std::cout << "Test sur c" << std::endl;
	std::cout << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl << std::endl;

	std::cout << "Test sur b et operations" << std::endl;
	std::cout << b << std::endl;
	std::cout << b - a << std::endl;
	std::cout << b - c << std::endl;
	std::cout << b * a << std::endl;
	std::cout << (b * a) / c << std::endl << std::endl;
	
	std::cout << "Test sur comparisons" << std::endl;
	std::cout << (b != a) << std::endl;
	std::cout << (b == a) << std::endl;
	std::cout << (b > a) << std::endl;
	std::cout << (b >= a) << std::endl;
	std::cout << (b <= a) << std::endl;
	std::cout << (b < a) << std::endl << std::endl;
	
	std::cout << "Test sur minmax" << std::endl;	
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min(a, c) << std::endl;
	return 0;
}
