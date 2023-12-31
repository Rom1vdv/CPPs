/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:28:22 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/25 15:32:01 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public :
		Point();
		Point(const float x, const float y);
		Point(Point const & point);
		~Point();
	
		Point & operator=(Point const & rhs);
		Fixed getX() const;
		Fixed getY() const;
		
	private :
		const Fixed x;
		const Fixed y;	
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif