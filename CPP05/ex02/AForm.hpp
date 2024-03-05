/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:05:18 by romvan-d          #+#    #+#             */
/*   Updated: 2024/03/05 14:06:48 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class AForm
{
    public :
        AForm();
        AForm(const std::string name, const int signGradeRequired, const int executeGradeRequired);
        AForm(const Form & other);
        virtual ~AForm();
        
        Form & operator=(Form const & other);
        
        class GradeTooHighException : public std::exception
        {
            const char * what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char * what() const throw();
        };

        bool                getSigned() const;
        std::string         getName() const;
        int                 getSignGradeRequirement() const;
        int                 getExecuteGradeRequirement() const;

        void                beSigned(Bureaucrat & bureaucrat);
        virtual	void		execute(Bureaucrat & bureaucrat) = 0;
        
    private :
        const std::string   name;
        bool                signedStatus;
        const int           signGradeRequired;
        const int           executeGradeRequired;
        
};

std::ostream & operator<<(std::ostream & input, Form & rhs);

#endif