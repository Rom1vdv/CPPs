/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:28:16 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/06 17:13:40 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;	
}

Point::Point(const float x, const float y) : x(x), y(y)
{
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}
Point::Point(Point const & point)
{
	this->x = point.x;
	this->y = point.y;
	return 
}