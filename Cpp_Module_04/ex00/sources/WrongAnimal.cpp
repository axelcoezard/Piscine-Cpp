/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:32:40 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/14 11:07:47 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->setType("WrongAnimal");
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & copy)
{
	*this = copy;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=(const WrongAnimal & copy)
{
	this->setType(copy.getType());
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{ std::cout << "WrongAnimal destructor called" << std::endl; }

void	WrongAnimal::makeSound(void) const
{ std::cout << "**WrongAnimal does a weird default sound**" << std::endl; }

std::string	WrongAnimal::getType(void) const
{ return (this->_type); }

void	WrongAnimal::setType(std::string type)
{ this->_type = type; }
