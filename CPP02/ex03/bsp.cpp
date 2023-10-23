/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:40:05 by rom1              #+#    #+#             */
/*   Updated: 2023/10/23 13:58:39 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cstdbool>

Fixed calculateTriangleArea(Point const A, Point const B, Point const C)
{
	Fixed determinant;
	determinant = A.getX() * (B.getY() - C.getY()) -
		A.getY() * (B.getX() - C.getX()) + 
		(B.getX() * C.getY() - C.getX() * B.getY());
	return determinant / Fixed(2);
}

bool bsp (Point const a, Point const b, Point const c, Point const point)
{
	Fixed TotalArea = calculateTriangleArea(a, b, c);
	Fixed AreaNoA = calculateTriangleArea(b, c, point);
	Fixed AreaNoB = calculateTriangleArea(a, c, point);
	Fixed AreaNoC = calculateTriangleArea(a, b, point);

	if ( AreaNoA + AreaNoB + AreaNoC > TotalArea)
		return false;
	return true;

}

/* Using the determ method : 
For A B C be vertice of a triangle ( aka corner points)
We can use the following formula :
Area = 1/2 * determ(Ax Ay 1
					Bx By 1
					Cx Cy 1)
*/