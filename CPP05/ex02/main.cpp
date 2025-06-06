/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:51:17 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/06 14:12:41 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void ) {
	Bureaucrat	master( "john", 1 );
	Bureaucrat	middle( "bob", 73 );
	Bureaucrat	servant( "marc", 150 );
	AForm		*shruform = new ShrubberyCreationForm( "tree" );
	AForm		*roboform = new RobotomyRequestForm( "franken" );
	AForm		*presiform = new PresidentialPardonForm( "bob" );

	std::cout << std::endl;
	std::cout << master << std::endl;
	std::cout << middle << std::endl;
	std::cout << servant << std::endl;
	std::cout << *shruform << std::endl;
	std::cout << *roboform << std::endl;
	std::cout << *presiform << std::endl << std::endl;

	try {
		std::cout << "********** TRY **********" << std::endl << std::endl;

		servant.signForm( *shruform );
		servant.signForm( *roboform );
		servant.signForm( *presiform );
		middle.signForm( *shruform );
		middle.signForm( *roboform );
		middle.incrementGrade();
		middle.signForm( *roboform );
		middle.signForm( *presiform );
		master.signForm( *shruform );
		master.signForm( *roboform );
		master.signForm( *presiform );

		std::cout << std::endl;

		servant.executeForm( *shruform );
		servant.executeForm( *roboform );
		servant.executeForm( *presiform );
		middle.executeForm( *shruform );
		middle.executeForm( *roboform );
		middle.executeForm( *presiform );
		master.executeForm( *shruform );
		master.executeForm( *roboform );
		master.executeForm( *presiform );

		std::cout << std::endl << "********** SUCCESS **********" << std::endl << std::endl;
	}
	catch (std::exception &e) {
		std::cout << std::endl << "********** CATCH **********" << std::endl;
		std::cout << std::endl << e.what() << std::endl << std::endl;
	}

	delete shruform;
	delete roboform;
	delete presiform;
	return (0);
}