/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:59:57 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/09 14:16:59 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(void)
{ }

bool	Replace::setFilename(std::string filename)
{
	if (filename.empty()) return (false);
	if (this->_file.is_open())
		this->_file.close();
	this->_file.open(filename);
	this->_filename = filename;
	return (true);
}

bool	Replace::replace(std::string s1, std::string s2)
{
	std::string	result;
	if (s1.empty() || s2.empty())
		return (false);
	size_t	length = s1.length();
	result.assign(
		std::istreambuf_iterator<char>(this->_file),
		std::istreambuf_iterator<char>()
	);
	for (size_t pos = 0; pos < result.length(); pos++)
		if (result.compare(pos, length, s1) == 0)
			result.erase(pos, length).insert(pos, s2);
	return (true);
}

Replace::~Replace(void)
{ }
