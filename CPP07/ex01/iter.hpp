/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:30:16 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/08 14:41:20 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void displayContent(T const &content)
{
    std::cout << "Content = " << content << std::endl;
}

template <typename T>
void	iter(T array[], int size, void (*f)(T const &))
{
	for (int i = 0; i < size; i++)
	{
		f(array[i]);
	}
}

#endif