/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:20:12 by romvan-d          #+#    #+#             */
/*   Updated: 2023/10/29 14:25:32 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private :
		
		std::string const	name;
		unsigned int		grade;
		
	public :
		
		Bureaucrat(std::string const name, unsigned int grade);
		Bureaucrat(Bureaucrat const & other);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & rhs);
		
		class GradeTooHighException
		{
			
		};

		std::string const	getName() const;
		unsigned int		getGrade() const;
		void				incrementGrade(int value = 1);
		void				decrementGrade(int value = 1);
};

std::ostream & operator<<(std::ostream & output, Bureaucrat const & rhs);

#endif