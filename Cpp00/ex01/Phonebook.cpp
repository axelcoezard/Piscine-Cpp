/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:42:00 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/30 17:37:14 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_limit = 8;
	this->_size = 0;
}

void	Phonebook::operator+=(Contact *contact)
{
	if (this->_size + 1 < this->_limit)
		this->_contacts[this->_size++] = contact;
}

Contact *Phonebook::operator[](int index)
{
	if (index < this->_limit)
		return (this->_contacts[index]);
	return (NULL);
}

Phonebook::~Phonebook(void)
{
	// TODO: Delete all created contacts
}
