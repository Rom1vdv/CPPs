/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:33:36 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/19 19:36:14 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

double timeElapsed(struct timeval	begin, struct timeval	end)
{
	long seconds = end.tv_sec - begin.tv_sec;
	long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds*1e6 + microseconds;
	return (elapsed);
}

const char *InvalidValueError::what(void) const throw()
{
    return ("Invalid Value Input");
}

const char *DuplicateValueError::what(void) const throw()
{
    return ("Duplicate Value in Input");
}