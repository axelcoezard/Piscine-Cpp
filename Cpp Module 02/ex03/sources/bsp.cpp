/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:34:33 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/10 17:14:15 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed	bsp_area(const Point p1, const Point p2, const Point p3)
{
	Fixed	f1 = (p1.getX() - p3.getY()) * (p2.getY() - p3.getY());
	Fixed	f2 = (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
	return (f1 - f2);
}

bool	bsp(const Point A, const Point B, const Point C, const Point x)
{
	Fixed	d1 = bsp_area(x, A, B);
	Fixed	d2 = bsp_area(x, B, C);
	Fixed	d3 = bsp_area(x, C, A);

	bool	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	std::cout << A.getX() << "" << A.getY() << std::endl;
	std::cout << B.getX() << "" << B.getY() << std::endl;
	std::cout << C.getX() << "" << C.getY() << std::endl;
	return !(has_neg && has_pos);
}
