/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:53:01 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/08 16:53:03 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>
#include <string>

int main(void) {
    int intArray[5] = {0, 1 , 223, 5232, -132};
    iter(intArray, 5, displayContent<int>);

	std::cout << "-------------------" << std::endl;
    char charArray[5] = {'A', 'B', 'C', 'D', 'E'};
    
    iter(charArray, 5, displayContent<char>);

    return (0);
};
