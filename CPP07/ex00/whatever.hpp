/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:20:50 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/08 14:27:55 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void	swap(T & firstArg, T & secondArg)
{
	T tmp = firstArg;
	firstArg = secondArg;
	secondArg = tmp;
}

template<typename T>
T	min(T const & firstArg, T const & secondArg)
{
	if (firstArg < secondArg)
		return firstArg;
	return secondArg;
}

template<typename T>
T	max(T const & firstArg, T const & secondArg)
{
	if (firstArg > secondArg)
		return firstArg;
	return secondArg;
}
#endif