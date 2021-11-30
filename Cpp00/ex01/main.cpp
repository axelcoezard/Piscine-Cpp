/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:54:21 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/30 18:08:37 by acoezard         ###   ########.fr       */
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
	std::cout << "            ADD | SEARCH | END            "	<< std::endl;
	std::cout << "=========================================="	<< std::endl;
}

static void	_add(Phonebook *phonebook)
{
	std::string	entry;
	Contact		*contact;

	contact = new Contact();
	std::cout << "phonebook: Remplir les informations suivantes"	<< std::endl;
	std::cout << "phonebook: firstname=";
	std::getline(std::cin, entry);
	contact->set_firstname(entry);
	std::cout << "phonebook: lastname=";
	std::getline(std::cin, entry);
	contact->set_lastname(entry);
	std::cout << "phonebook: nickname=";
	std::getline(std::cin, entry);
	contact->set_nickname(entry);
	*phonebook += contact;
}

static void _search(Phonebook *phonebook)
{
	(void) phonebook;
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
