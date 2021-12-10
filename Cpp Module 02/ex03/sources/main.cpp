/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:20:58 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/10 17:12:50 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point	A(Fixed(0.0f), Fixed(0.0f));
	Point	B(Fixed(20.0f), Fixed(0.0f));
	Point	C(Fixed(10.0f), Fixed(30.0f));

	Point	p (
		Fixed(0),
		Fixed(0)
	);

	Point	r (
		Fixed(-5),
		Fixed(5)
	);

	std::cout << (bsp(A, B, C, p) ? "Inside" : "Outside") << std::endl;
	std::cout << (bsp(A, B, C, r) ? "Inside" : "Outside") << std::endl;
	return (0);
}
