/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:15:52 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/19 18:32:17 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <exception>

#define ADD '+'
#define MIN '-'
#define DIV '/'
#define PRODUCT '*'


class DivisionByZeroError : public std::exception
{
    public:
        const char* what(void) const throw();
};

class InvalidOperatorError : public std::exception
{
    public:
        const char* what(void) const throw();
};

class InvalidStackSizeError : public std::exception
{
    public:
        const char* what(void) const throw();
};

class InvalidCharacterError : public std::exception
{
    public:
        const char* what(void) const throw();
};

int RPN(std::string & values);


#endif