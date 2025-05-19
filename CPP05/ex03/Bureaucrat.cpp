/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:57:01 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/06 14:44:03 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


Bureaucrat::Bureaucrat()
: name("default"), grade(75)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade)
: name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & other)
: name(other.name), grade(other.grade)
{
	if (other.grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	if (other.grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->grade = rhs.grade;
	return *this;
}

std::string const Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::incrementGrade(int value)
{

		if (this->grade - value < 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else
		{
			this->grade -= value;
		}
}

void	Bureaucrat::decrementGrade(int value)
{

		if (this->grade + value > 150)
		{
			throw Bureaucrat::GradeTooLowException();
		}
		else
		{
			this->grade += value;
		}
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High Exception : Cannot assign grade higher than 1";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low Exception : Cannot assign grade lower than 150";
}

std::ostream & operator<<(std::ostream & output, Bureaucrat const & rhs)
{
	output << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return output;
}

void	Bureaucrat::signForm(AForm & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout << this->name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm( AForm const & form )
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " could not execute " << form.getName() << " because " << e.what() << std::endl;
	}
}