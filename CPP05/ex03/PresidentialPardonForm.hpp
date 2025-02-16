/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 22:37:09 by rom1              #+#    #+#             */
/*   Updated: 2025/02/16 23:18:54 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm  
{

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm & other);
		~PresidentialPardonForm();
		PresidentialPardonForm & operator=( const PresidentialPardonForm & other);

		virtual void	execute(Bureaucrat const & executor) const;

		private:
			const std::string target;
};

#endif