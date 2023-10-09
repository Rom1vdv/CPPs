/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:34:32 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/09 16:49:23 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <cmath>
#include <iostream>

int main( void ) 
{
	Point a(1.0, 1.0);
	Point b(3.0, 4.0);
	Point c(5.0, 2.0);
	Point d(5.0, 3.0);
	bool bspvalue;
	
	bspvalue = bsp(a, b, c, d);
	std::cout << "Is d in bsp : " << bspvalue << std::endl;
	
	// Point f(0, 1);

	// bspvalue = bsp(a, b, c, f);
	// std::cout << "Is d in bsp : " << bspvalue << std::endl;

	// Point g(5, 2);
	
	// bspvalue = bsp(a, b, c, g);
	// std::cout << "Is d in bsp : " << bspvalue << std::endl;
	
	
	return 0;
}
