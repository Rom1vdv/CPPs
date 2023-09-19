/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:19:07 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/19 13:24:44 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string Brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &Brain;
	std::string& stringREF = Brain;

	std::cout << &Brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << Brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;	
}