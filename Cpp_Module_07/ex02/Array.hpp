/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:07:51 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/30 18:12:52 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
    private:
        size_t  _size;
    public:
        Array(size_t size);
        Array(const Array & copy);
        ~Array(void);

        Array&  operator=(const Array & copy);

};
