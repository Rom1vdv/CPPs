/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:37:45 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/07 17:20:44 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		
		Contact(void);
		~Contact(void);

		/* Getters */
		std::string GetFirstName(void);
		std::string GetLastName(void);
		std::string GetNickName(void);
		std::string GetPhoneNumber(void);
		std::string GetDarkestSecret(void);

		/* Setters */

		void	SetFirstName(std::string first_name);
		void	SetLastName(std::string last_name);
		void	SetNickName(std::string nick_name);
		void	SetPhoneNumber(std::string phone_number);
		void	SetDarkestSecret(std::string darkest_secret);
		
	
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string	PhoneNumber;
		std::string DarkestSecret;
};

#endif