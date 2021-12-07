/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:29:21 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/30 14:36:50 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) { }

void	Contact::set_firstname(std::string firstname)
{ this->_firstname = firstname; }

void	Contact::set_lastname(std::string lastname)
{ this->_lastname = lastname; }

void	Contact::set_nickname(std::string nickname)
{ this->_nickname = nickname; }

void	Contact::set_phone_number(std::string phone_number)
{ this->_phone_number = phone_number; }

void	Contact::set_darkest_secret(std::string darkest_secret)
{ this->_darkest_secret = darkest_secret; }

std::ostream&	operator<<(std::ostream& stream, const Contact& contact)
{
	std::cout << "firstname=" << contact->_firstname << std::endl;
	std::cout << "lastname=" << contact->_lastname << std::endl;
	std::cout << "nickname=" << contact->_nickname << std::endl;
	std::cout << "phone_number=" << contact->_phone_number << std::endl;
	std::cout << "darkest_secret=" << contact->_darkest_secret << std::endl;

	return (stream);
}

Contact::~Contact(void) { }
