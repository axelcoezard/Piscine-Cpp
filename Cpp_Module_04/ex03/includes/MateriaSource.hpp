/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:05:45 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/14 16:13:26 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource
{
	public:
		MateriaSource(void);
		~MateriaSource(void);

		void	learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};
