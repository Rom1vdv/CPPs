/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:52:05 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/19 17:30:47 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2)
	{
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }

    std::map<std::string, double> dataFile;

    try 
	{
        getDB(dataFile);
        processBTCvalues(dataFile, av[1]);
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
    return (0);
}