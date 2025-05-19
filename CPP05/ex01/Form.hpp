/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:05:18 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/06 14:32:37 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{
    public :
        Form();
        Form(const std::string name, const int signGradeRequired, const int executeGradeRequired);
        Form(const Form & other);
        ~Form();
        Form & operator=(Form const & other);
        
        class GradeTooHighException : public std::exception
        {
            const char * what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            const char * what() const throw();
        };

        class AlreadySignedException : public std::exception
        {
                const char * what() const throw();
        };
        
        bool                getSigned() const;
        std::string         getName() const;
        int                 getSignGradeRequirement() const;
        int                 getExecuteGradeRequirement() const;

        void                beSigned(Bureaucrat & bureaucrat);
        
        
    private :
        const std::string   name;
        bool                signedStatus;
        const int           signGradeRequired;
        const int           executeGradeRequired;
        
};

std::ostream & operator<<(std::ostream & input, Form & rhs);

#endif