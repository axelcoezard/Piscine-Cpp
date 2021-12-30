/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:37:24 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/23 18:47:37 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include <cctype>
# include <cmath>
# include <limits>

class Caster {
	private:
		std::string _value;

		void	setValue(std::string & value);
	public:
		Caster(const std::string & value);
		Caster(const Caster & copy);
		~Caster(void);

		std::string	getValue(void) const;
};
