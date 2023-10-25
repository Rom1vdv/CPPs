/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:34:32 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/25 16:55:24 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <iostream>

int main( void ) 
{
	Point a(1, 1);
	Point b(3, 4);
	Point c(5, 2);
	Point d(3, 3);
	int bspvalue;
	
	bspvalue = bsp(a, b, c, d);
	std::cout << "Is d in bsp : " << bspvalue << std::endl;
	
	Point f(3, 4);

	bspvalue = bsp(a, b, c, f);
	std::cout << "Is f in bsp : " << bspvalue << std::endl;

	Point g(0, 3);
	
	bspvalue = bsp(a, b, c, g);
	std::cout << "Is g in bsp : " << bspvalue << std::endl;
	
	
	return 0;
}
