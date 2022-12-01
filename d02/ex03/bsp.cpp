/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:08:37 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/01 16:44:57 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	CalcTriArea(Point a, Point b, Point c) {
	Fixed res(
			((a.getX() - c.getX()) * (b.getY() - c.getY()))
		-	((b.getX() - c.getX()) * (a.getY() - c.getY()))
	);
	return ((res > 0 ? res : -res) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	TotalArea(CalcTriArea(a, b, c));
	Fixed	Area1(CalcTriArea(point, a, b));
	Fixed	Area2(CalcTriArea(point, b, c));
	Fixed	Area3(CalcTriArea(point, c, a));


	if (a == b || b == c || c == a)
	{
		std::cout << "Input valid triangle" << std::endl;
		return (false);
	}
	if (Area1 + Area2 + Area3 > TotalArea)
		return (false);
	return (true);
}