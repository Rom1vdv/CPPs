/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:40:05 by rom1              #+#    #+#             */
/*   Updated: 2023/10/15 15:10:37 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

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

Fixed calculateTriangleArea(Point const A, Point const B, Point const C)
{
	Fixed determinant;
	determinant = A.getX() * (B.getY() - C.getY()) + 
		A.getY() * (B.getX() - C.getX()) + 
		(B.getX() * C.getY() - C.getX() * B.getY());
	return determinant / 2.0f;
}