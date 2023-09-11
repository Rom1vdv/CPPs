/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:09:30 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/11 18:25:37 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void ParseInput(std::string Input, PhoneBook NewPhoneBook)
{
	int i = 0;
	
	if (Input == "ADD")
	{
		NewPhoneBook.Add(&i);
		i++;
		return ;
	}
	else if (Input == "SEARCH")
	{
		// PhoneBook::Search;
	}
	else if (Input == "EXIT")
	{
		std::cout << "You entered the EXIT command, program will shut down <(￣ ﹌ ￣)>"<<std::endl;
		std::exit(0);
	}
}

int main(void)
{
	std::string Input;
	PhoneBook NewPhoneBook = PhoneBook();
	std::cout << "Enter one of the following command : ADD , SEARCH , EXIT (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧" << std::endl;
	std::getline(std::cin, Input);
	while (true)
	{
		if (Input != "ADD" && Input != "SEARCH" && Input != "EXIT")
		{
			std::cout << "You entered a wrong command, please try again ┬┴┬┴┤( ͡° ͜ʖ├┬┴┬┴ " << std::endl;
			std::getline(std::cin, Input);
		}
		ParseInput(Input, NewPhoneBook);
	}
	return (0);
}
