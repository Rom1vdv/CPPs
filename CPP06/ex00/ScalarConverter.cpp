/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:11:29 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/07 13:35:15 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <climits>

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void) other;
}

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    (void) other;
    return *this;
}

bool	checkStream(std::stringstream & stream)
{
	if (stream.fail())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: overflow" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return false;
	}
	return true;
}

Type getScalarType(std::string input)
{
	int inputLength = input.length();
	int hasDot = 0;
	int hasFloat = 0;
	
	if (inputLength == 1)
	{
		if (isdigit(input[0]) == 1)
			return INT;
		return CHAR;
	}
	
	if (!(input[0] == '+' || input[0] == '.' || input[0] == '-' || isdigit(input[0])))
		return INVALID;
	if (input == "=inff" || input == "+inff" || input == "nanf")
		return FLOATLITERAL;
	if (input == "=inf" || input == "+inf" || input == "nan")
		return DOUBLELITERAL;

	for (int i = 1; i < inputLength; i++)
	{
		if (input[i] == '.')
		{
			hasDot++;
			if (hasDot > 1 || input[i+1] == 'f' || input[i+1] == '\0')
				return INVALID;
		}
		else if (input[i] == 'f' && i == inputLength - 1 && hasDot == 1) // -> this checks if f is the last char and the number has a dot
			hasFloat = 1;
		else if (!isdigit(input[i]))
			return INVALID;
	}
	if (hasFloat == 1)
		return FLOAT;
	else if (hasDot == 1)
		return DOUBLE;
	else
		return INT;
}

void	ScalarConverter::convert(std::string str)
{
	enum Type whichType = getScalarType(str);

	switch(whichType)
	{
		case INT:
			fromInt(str);
			break;
		case CHAR:
			fromChar(str);
			break;
		case FLOAT:
			fromFloat(str);
			break;
		case DOUBLE:
			fromDouble(str);
			break;
		case FLOATLITERAL:
			fromLiteral(str);
			break;
		case DOUBLELITERAL:
			fromDoubleLiteral(str);
			break;
		default:
			std::cout << "Conversion is not possible !\n" << " Supported types are : char, int, double, floats "<< std::endl;
			break;
	}
}

void	ScalarConverter::fromInt(std::string str)
{
	std::stringstream intStream(str);
	int	convertedValue;

	intStream >> convertedValue;
	if (!checkStream(intStream))
		return ;
	if (intStream.fail() || (convertedValue <= 31 || convertedValue >= 127))
		std::cout << "char : " << "Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(convertedValue) << std::endl;
	std::cout << "int: " << convertedValue << std::endl;
    std::cout << "float: " << static_cast<float>(convertedValue) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(convertedValue) << ".0" << std::endl;
	
}

void	ScalarConverter::fromChar(std::string str)
{
	char charValue = str[0];
	
    std::cout << "char: " << charValue << std::endl;
    std::cout << "int: " << static_cast<int>(charValue) << std::endl;
    std::cout << "float: " << static_cast<float>(charValue) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(charValue) << ".0" << std::endl;
}

void	ScalarConverter::fromFloat(std::string str)
{
	std::stringstream floatStream(str.substr(0, str.length() - 1));

	int 	intValue;
	float	floatValue;
	double	doubleValue;

	floatStream >> floatValue;
	if (!checkStream(floatStream))
		return ;
	if (!isprint(floatValue))
		std::cout << "char : " << "Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(floatValue) << std::endl;

	intValue = static_cast<int>(floatValue);
	doubleValue = static_cast<double>(floatValue);

	if (doubleValue > static_cast<double>(INT_MAX) || doubleValue < static_cast<double>(INT_MIN))
		std::cout << "int : overflow" << std::endl;
	else
		std::cout << "int : " << intValue << std::endl;
	
	std::cout << "float : " << floatValue;
	if (intValue == floatValue)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	
	std::cout << "double :" << doubleValue;
	if (intValue == doubleValue)
		std::cout << ".0";
	std::cout << std::endl;
}

void	ScalarConverter::fromDouble(std::string str)
{
	std::stringstream doubleStream(str.substr(0, str.length() - 1));

	int 	intValue;
	float	floatValue;
	double	doubleValue;

	doubleStream >> doubleValue;
	if (!checkStream(doubleStream))
		return ;
		
	if (!isprint(doubleValue))
		std::cout << "char : " << "Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(doubleValue) << std::endl;
	
	intValue = static_cast<int>(doubleValue);
	floatValue = static_cast<float>(doubleValue);
	if (doubleValue > static_cast<double>(INT_MAX) || doubleValue < static_cast<double>(INT_MIN))
		std::cout << "int : overflow" << std::endl;
	else
		std::cout << "int : " << intValue << std::endl;
	
	std::cout << "float : " << floatValue;
	if (intValue == floatValue)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	
	std::cout << "double :" << doubleValue;
	if (intValue == doubleValue)
		std::cout << ".0";
	std::cout << std::endl;
}

void	ScalarConverter::fromLiteral(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << std::endl;
	std::cout << "double: " << str.substr(0, str.size() - 1) << std::endl; // removes the trailing f from the float (inff, nanf)
	return ;
}

void ScalarConverter::fromDoubleLiteral(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
	return ;
}