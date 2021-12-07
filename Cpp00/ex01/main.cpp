/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:54:21 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/07 16:20:41 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "Phonebook.hpp"
#include "Contact.hpp"

static void _begin(void)
{
	std::cout << "=========================================="	<< std::endl;
	std::cout << "        BIENVENUE SUR LE PHONEBOOK        "	<< std::endl;
	std::cout 													<< std::endl;
	std::cout << "                Commandes:                "	<< std::endl;
	std::cout << "            ADD | SEARCH | EXIT           "	<< std::endl;
	std::cout << "=========================================="	<< std::endl;
}

static void	_add(Phonebook *phonebook)
{
	std::string	entry;
	Contact		*contact;

	contact = new Contact();
	std::cout << "phonebook: firstname=";
	std::getline(std::cin, entry);
	contact->set_firstname(entry);
	std::cout << "phonebook: lastname=";
	std::getline(std::cin, entry);
	contact->set_lastname(entry);
	std::cout << "phonebook: nickname=";
	std::getline(std::cin, entry);
	contact->set_nickname(entry);
	std::cout << "phonebook: phone_number=";
	std::getline(std::cin, entry);
	contact->set_phone_number(entry);
	std::cout << "phonebook: darkest_secret=";
	std::getline(std::cin, entry);
	contact->set_darkest_secret(entry);
	*phonebook += contact;
}

static void _search(Phonebook *phonebook)
{
	std::string	entry;
	std::cout << "phonebook: id=";

	int	id = 0;
	while (id < 1 || id > 8)
	{
		std::getline(std::cin, entry);
		id = atoi(entry.c_str());
	}
	std::cout << phonebook[id -1];
}

int	main(void)
{
	Phonebook	*phonebook;
	std::string	entry;

	phonebook = new Phonebook();
	_begin();
	while (42)
	{
		std::cout << "phonebook$ ";
		std::getline(std::cin, entry);
		if (entry == "ADD")
			_add(phonebook);
		if (entry == "SEARCH")
			_search(phonebook);
		if (entry == "EXIT")
			break;
	}
	delete phonebook;
	return (0);
}
