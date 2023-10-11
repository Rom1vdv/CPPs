/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:40:05 by rom1              #+#    #+#             */
/*   Updated: 2023/10/11 12:17:21 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


static Fixed absoluteValueFixed(Fixed value)
{
	if (value >= 0)
		return value;
	return (value * Fixed(-1));
}
/* Using the determ method : 
For A B C be vertice of a triangle ( aka corner points)
We can use the following formula :
Area = 1/2 * determ(Ax Ay 1
					Bx By 1
					Cx Cy 1)
*/

static Fixed calculateTriangleArea(Point const A, Point const B, Point const C)
{
	Fixed determinant;
	Fixed divide(2);
	determinant = absoluteValueFixed(A.getX() * (B.getY() - C.getY()) - 
		A.getY() * (B.getX() - C.getX()) + 
		(B.getX() * C.getY() - C.getX() * B.getY()));
	return (determinant / divide);
}

bool bsp (Point const a, Point const b, Point const c, Point const point)
{
	Fixed TotalArea = calculateTriangleArea(a, b, c);
	Fixed AreaNoA = calculateTriangleArea(b, c, point);
	Fixed AreaNoB = calculateTriangleArea(a, c, point);
	Fixed AreaNoC = calculateTriangleArea(a, b, point);

	if (AreaNoA + AreaNoB + AreaNoC > TotalArea)
		return false;
	return true;

}
