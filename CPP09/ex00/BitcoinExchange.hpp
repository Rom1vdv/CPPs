/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:58:46 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/19 16:33:43 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <exception>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <iomanip>

void processBTCvalues(std::map<std::string, double> & dataFile, std::string inputFile);
void getDB(std::map<std::string, double> & dataFile);

class OpenFileError : public std::exception {
    public:
        const char* what(void) const throw();
};

class WrongDateError : public std::exception {
    public:
        const char* what(void) const throw();
};

class FlowValueError : public std::exception {
    public:
        const char* what(void) const throw();
};

class InvalidFormatError : public std::exception {
    public:
        const char* what(void) const throw();
};

#endif