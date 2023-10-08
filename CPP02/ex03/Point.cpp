/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:28:16 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/09 00:07:18 by rom1             ###   ########.fr       */
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
Point::Point(Point const & point) : x(point.x), y(point.y)
{
	return ;
}

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}

Point & Point::operator=(Point const & rhs)
{
	(void)rhs;
	//You cannot overload const attributes since you cannot set them after construction
// 	this->x = rhs.x;
// 	this->y = rhs.y;
	return *this;
}

Fixed Point::getX() const
{
	return this->x;
}

Fixed Point::getY() const
{
	return this->y;
}