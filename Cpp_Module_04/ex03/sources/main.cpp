/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:26:13 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/15 09:54:14 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	MateriaSource	*source = new MateriaSource();
	Character	*axel = new Character("Axel");

	source->learnMateria(new Cure());
	source->learnMateria(new Ice());

	axel->equip(source->createMateria("ice"));
	axel->equip(source->createMateria("cure"));
	axel->equip(source->createMateria("ice"));

	axel->unequip(2);

	axel->use(0, *axel);
	axel->use(1, *axel);
	axel->use(2, *axel);

	return (0);
}

