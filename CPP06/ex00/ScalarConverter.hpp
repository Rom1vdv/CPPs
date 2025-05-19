/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:05:37 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/06 18:02:36 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <ctype.h>
#include <sstream>

enum Type
{
	INVALID,
	INT,
	CHAR,
	FLOAT,
	DOUBLE,
	FLOATLITERAL,
	DOUBLELITERAL
};

class ScalarConverter
{
	private :
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter &other );
		~ScalarConverter( void );
		ScalarConverter &operator=( const ScalarConverter &other );

        static void fromInt(std::string str);
        static void fromFloat(std::string str);
        static void fromDouble(std::string str);
        static void fromLiteral(std::string str);
        static void fromDoubleLiteral(std::string str);
		static void fromChar(std::string str);
	public:
		static void	convert(std::string input);
};

#endif