/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:28:22 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/09 00:07:08 by rom1             ###   ########.fr       */
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

#endif