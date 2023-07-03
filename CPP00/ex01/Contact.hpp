/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:37:45 by romvan-d          #+#    #+#             */
/*   Updated: 2023/07/03 17:32:53 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string	PhoneNumber;
		std::string DarkestSecret;
};