/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:40:28 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/23 18:47:25 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

Caster::Caster(const std::string & value)
	: _value(value)
{ }

Caster::Caster(const Caster & copy)
{
	this->setValue(copy.getValue());
}

std::string	Caster::getValue(void) const
{ return (this->getValue()); }

void	Caster::setValue(std::string & value)
{ this->setValue(value); }

Caster::~Caster(void)
{ }
