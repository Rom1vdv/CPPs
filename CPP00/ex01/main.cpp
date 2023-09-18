/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:09:30 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/18 16:56:08 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

static void ParseInput(std::string Input, PhoneBook &NewPhoneBook, int &ContactIndex, int	&CurrentAmountOfContacts)
{	
	if (Input == "ADD")
	{
		NewPhoneBook.Add(ContactIndex);
		++ContactIndex;
		if(CurrentAmountOfContacts < 8)
		{
			++CurrentAmountOfContacts;
		}
	}
	else if (Input == "SEARCH")
	{
		if (CurrentAmountOfContacts == 0)
		{
			std::cout << "Theres is no contacts currently please enter another command <(￣ ﹌ ￣)>" <<std::endl;
			return ;
		}
		NewPhoneBook.Search(CurrentAmountOfContacts);
	}
	else if (Input == "EXIT")
	{
		std::cout << "You entered the EXIT command, program will shut down <(￣ ﹌ ￣)>"<<std::endl;
		return ;
	}
}

int main(void)
{
	std::string Input;
	int	ContactIndex = 0;
	int	CurrentAmountOfContacts = 0;
	
	PhoneBook NewPhoneBook = PhoneBook();
	std::cout << "Enter one of the following command : ADD , SEARCH , EXIT (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧" << std::endl;
	if (!std::getline(std::cin, Input))
	{
		std::exit(EXIT_FAILURE);
	}
	while (true)
	{
		if (Input != "ADD" && Input != "SEARCH" && Input != "EXIT")
		{
			std::cout << "You entered a wrong command, please try again ┬┴┬┴┤( ͡° ͜ʖ├┬┴┬┴ " << std::endl;
			if (!std::getline(std::cin, Input))
			{
				std::exit(EXIT_FAILURE);
			}
		}
		ParseInput(Input, NewPhoneBook, ContactIndex, CurrentAmountOfContacts);
		if (Input == "EXIT")
			return (0);
		std::cout << "You can enter another a different command such as : ADD, SEARCH or EXIT (^=◕ᴥ◕=^)" << std::endl;
		if (!std::getline(std::cin, Input))
		{
			std::exit(EXIT_FAILURE);
		}
	}
	return (0);
}
