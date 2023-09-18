/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:11:21 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/18 16:25:20 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_HPP
# define EX01_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

# define CONTINUE_PROGRAM 0
# define EXIT_PROGRAM 2

std::string	TruncateStrIfTooLong(std::string GivenString, size_t EndIndex);
bool	VerifyIfStringIsOnlyDigit(std::string GivenString);

#endif