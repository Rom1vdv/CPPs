/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:20:12 by romvan-d          #+#    #+#             */
/*   Updated: 2024/02/15 14:23:52 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Form;

class Bureaucrat
{
	private :
		
		std::string const	name;
		int		grade;
		
	public :
		Bureaucrat();
		Bureaucrat(std::string const name, unsigned int grade);
		Bureaucrat(Bureaucrat const & other);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & rhs);
		
		class GradeTooHighException : public std::exception
		{
			public :

				const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :

				const char * what() const throw();
		};

		std::string const	getName() const;
		int					getGrade() const;
		void				incrementGrade(int value = 1);
		void				decrementGrade(int value = 1);
		void				signForm(Form & form);
};

std::ostream & operator<<(std::ostream & output, Bureaucrat const & rhs);

#endif