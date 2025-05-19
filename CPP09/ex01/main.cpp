/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:22:42 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/19 18:23:27 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
	{
        std::cerr << "Invalid Arguments" << std::endl;
        return (1);
    }
    std::string input(av[1]);
    int result;
    
    try
	{
        result = RPN(input);
        std::cout << result << std::endl;
    }
    catch (std::exception &e)
	{
        std::cerr << e.what() << std::endl;
        return (1);
    }
    return (0);
}