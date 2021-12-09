/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:37:35 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/09 15:06:18 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replace.hpp"

int	error(std::string msg)
{
	std::cerr << msg << std::endl;
	return (1);
}

int	main(int ac, char **av)
{
	Replace	replace;
	if (ac != 4)
		return (error("Error: not enough arguments.\n"));
	if (!replace.setFilename(av[1]))
		return (error("Error: file is invalid.\n"));
	if (!replace.replace(av[2], av[3]))
		return (error("Error: an error occured while replacing s1 by s2.\n"));
	return (0);
}
