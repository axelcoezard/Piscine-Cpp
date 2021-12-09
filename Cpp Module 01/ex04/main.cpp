/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:37:35 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/09 12:40:03 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	error(std::string msg)
{
	std::cerr << msg << std::endl;
	return (1);
}

int	main(int ac, char **av)
{
	(void) av;
	if (ac != 3)
		return (error("replace: not enough arguments."));
	return (0);
}
