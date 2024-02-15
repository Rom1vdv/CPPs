/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:51:17 by romvan-d          #+#    #+#             */
/*   Updated: 2024/02/13 14:11:25 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
    std::cout << "################COPY and ASSIGNMENT constructors#############" << std::endl;
    Bureaucrat A("A", 100);
    std::cout << A << std::endl;

    Bureaucrat B(A);
    std::cout << B << std::endl;

    Bureaucrat C;
    C = A;
    std::cout << C << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl << std::endl;

    try {
        Bureaucrat chef("Michelle", 2);
        Bureaucrat notAChef("Remy", 149);
        Bureaucrat smallBoy("smallBoy", 1000000);
        Bureaucrat bigBoy("smallBoy", 0); //this line is never read as the above line throws an exception
        std::cout << smallBoy << std::endl; 
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    //std::cout << test << std::endl; //=>impossible d'imprimer ca car pas dans le bloc try catch 
    // try {
        Bureaucrat chef("Michelle", 2);
        chef.incrementGrade();
        std::cout << chef << std::endl;
        chef.incrementGrade();
    // }
    // catch (std::exception &e) {
        // std::cout << e.what() << std::endl;
    // }
    try {
        Bureaucrat notAChef("Remy", 149);
        notAChef.decrementGrade();
        std::cout << notAChef << std::endl;
        notAChef.decrementGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "################COPY and ASSIGNMENT object destructors###############" << std::endl;
    return (0);
}