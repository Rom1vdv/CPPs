/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:19:26 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/06 15:19:48 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cmath>
#include<limits>

#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    (void) av;
    if (ac != 2) {
        std::cout << "Unvalid number of Args." << std::endl;
        return (1);
    }
    ScalarConverter::convert(av[1]);
}