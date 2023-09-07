/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:09:30 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/07 18:05:24 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void ParseInput(std::string Input)
{
	if (Input == "ADD")
	{
		// PhoneBook::Add;	
	}
	else if (Input == "SEARCH")
	{
		// PhoneBook::Search;
	}
	else if (Input == "EXIT")
	{
		std::cout << "You entered the EXIT command, program will shut down <(￣ ﹌ ￣)>"<<std::endl;
		exit(0);
	}
}

int main(void)
{
	std::string Input;
	
	std::cout << "Enter one of the following command : ADD , SEARCH , EXIT (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧" << std::endl;
	std::cin >> Input;
	while (true)
	{
		if (Input != "ADD" && Input != "SEARCH" && Input != "EXIT")
		{
			std::cout << "You entered a wrong command, please try again ┬┴┬┴┤( ͡° ͜ʖ├┬┴┬┴ " << std::endl;
			std::cin >> Input;
		}
		ParseInput(Input);
	}
	return (0);
}
