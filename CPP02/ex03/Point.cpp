/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:28:16 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/25 15:31:56 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	return ;	
}

Point::Point(const float x, const float y) : x((Fixed) x), y((Fixed) y)
{
	return ;
}
Point::Point(Point const & point) : x(point.x), y(point.y)
{
	return ;
}

Point::~Point()
{
	return ;
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