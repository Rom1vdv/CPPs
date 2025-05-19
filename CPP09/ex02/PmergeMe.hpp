/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:50:10 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/19 19:36:44 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <sstream>
#include <sys/wait.h>
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <deque>

double elapsed(struct timeval begin, struct timeval	end);

class InvalidValueError : public std::exception
{
    public:
        const char* what(void) const throw();
};

class DuplicateValueError : public std::exception
{
    public:
        const char* what(void) const throw();
};

#endif