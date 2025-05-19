/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:36:28 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/12 14:13:14 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

class ValueNotFoundException : public std::exception
{
    const char* what() const throw()
	{
        return ("Value not in container");
    }
};

template<typename T>
void easyfind(T const & container, int const & toFind)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), toFind);

    if (it == container.end())
        throw ValueNotFoundException();
    else
	{
        std::cout << "Value " << toFind << " was found." << std::endl;
    }
}

#endif
