/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:26:13 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/14 15:59:58 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void)
{
	Character	*axel = new Character("Axel");
	Cure	*cure = new Cure();
	Ice		*ice1 = new Ice();
	Ice		*ice2 = ice1->clone();

	axel->equip(cure);
	axel->equip(ice1);
	axel->equip(ice2);

	axel->unequip(1);

	axel->use(0, *axel);
	axel->use(1, *axel);
	axel->use(2, *axel);

	return (0);
}

