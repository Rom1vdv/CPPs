/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:38:45 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/19 18:09:41 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iterator>

static bool isLeap(int year)
{
	return (( year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
}

static bool isValidDate(int day, int month, int year)
{
	if (month < 1 || month > 12 || day < 1 || day > 31)
    	return false;
	if (month == 2)
	{
		if (isLeap(year))
			return (day <= 29);
		else
			return (day <= 28);
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
        return (day <= 30);
    return true;
}

static void parseNumber(double numberFormat)
{
	if (numberFormat < 0 || numberFormat > 1000)
		throw FlowValueError();
}

static void parseDate(std::string & dateFormat)
{
	dateFormat.erase(remove(dateFormat.begin(), dateFormat.end(), ' '), dateFormat.end());
	std::istringstream	sstream(dateFormat);
	std::tm	date = {};
	char	dateDelimiter;
	
	sstream >> date.tm_year;
	if (sstream.fail())
	{
		throw WrongDateError();
	}
	
	sstream >> dateDelimiter;       
    if (sstream.fail() || dateDelimiter != '-')
    {
		throw WrongDateError();
	}

	sstream >> date.tm_mon;
	if (sstream.fail())
	{
		throw WrongDateError();
	}
	
	sstream >> dateDelimiter;       
    if (sstream.fail() || dateDelimiter != '-')
    {
		throw WrongDateError();
	}

	sstream >> date.tm_mday;
	if (sstream.fail())
	{
		throw WrongDateError();
	}

	if (!isValidDate(date.tm_mday, date.tm_mon, date.tm_year))
    {
		throw WrongDateError();
    }
}


void	getDB(std::map<std::string, double> & datafile)
{
	std::string line;
	std::ifstream infile("data.csv");
	if (!infile)
		throw OpenFileError();
	
	while (std::getline(infile, line))
	{
		if(line.find("date") != std::string::npos)
			continue;
		std::istringstream sstream(line);
		std::string dateFormat;
		double		numberFormat = 0;

		if (std::getline(sstream, dateFormat, ',') && sstream >> numberFormat)
		{
			try
			{
				parseDate(dateFormat);
				datafile[dateFormat] = numberFormat;
			}
			catch(const std::exception& e)
			{
				std::cerr << dateFormat << " ---- " << e.what() << '\n';
			}
			
		}
		else
			std::cout << dateFormat << " ---- " << InvalidFormatError().what() << std::endl;
	}
	infile.close();
}

void	processBTCvalues(std::map<std::string, double> & dataFile, std::string inputFile)
{
	std::string line;
	std::ifstream infile(inputFile.c_str());
	if (!infile)
		throw OpenFileError();
	
	while (std::getline(infile, line))
	{
		if (line.find("date") != std::string::npos)
			continue;
		
		std::istringstream sstream(line);
		std::string dateFormat;
		double 		numberFormat = 0;
		std::map<std::string, double>::iterator it;

		if (std::getline(sstream, dateFormat, '|') && sstream >> numberFormat)
		{
			try
			{
				parseDate(dateFormat);
				parseNumber(numberFormat);
				if (dateFormat < dataFile.begin()->first)
					throw WrongDateError();
				it = dataFile.find(dateFormat);
				
				if (it != dataFile.end())
				{
					std::cout << dateFormat << " -> " << numberFormat << " = " << std::setprecision(5) << static_cast<double>(it->second) * numberFormat << std::endl;
				}
				else
				{
					it = dataFile.lower_bound(dateFormat);
					if (it != dataFile.end())
					{
						--it;
						std::cout << dateFormat << " -> " << numberFormat << " = " << std::setprecision(5) << static_cast<double>(it->second) * numberFormat << std::endl;
						
					}
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << dateFormat << " -> " << numberFormat << " ---- " << e.what() << std::endl;
			}
		}
		else
			std::cout << dateFormat << " ---- " << InvalidFormatError().what() << std::endl;
	}
	infile.close();
}

const char *OpenFileError::what(void) const throw() {
    return ("OpenFileError : Could not open or read from file");
}

const char *WrongDateError::what(void) const throw() {
    return ("WrongDateError : Invalid Date");
}

const char *FlowValueError::what(void) const throw() {
    return ("FlowValueError : Value too high or too low");
}

const char *InvalidFormatError::what(void) const throw() {
    return ("InvalidFormatError : Invalid Format");
}