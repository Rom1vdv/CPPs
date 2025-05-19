/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:13:50 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/07 14:29:41 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <execution>

Base * generate()
{
	int	roll = std::rand() % 3;
	Base * result = 0;

	if (roll == 0)
	{
		result = new A();
	} else if (roll == 1)
	{
		result = new B();
	} else if (roll == 2)
	{
		result = new C();
	} else
	{
		std::cout << "Something fucked up fr fr" << std::endl;
	}
	return (result);
}

void identify(Base* p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a)
	{
		std::cout << "A" << std::endl;
	} else if (b) 
	{
		std::cout << "B" << std::endl;
	} else if (c)
	{
		std::cout << "C" << std::endl;
	} else
	{
		std::cout << "Cannot identify this type" << std::endl;
	}
}

void identify(Base &p)
{
    try
	{
        A &CaseA = dynamic_cast<A &>(p);
        (void) CaseA;
        std::cout << "Type of base = A" << std::endl;
    }
    catch (std::exception &e)
	{

    }
    try
	{
        B &CaseB = dynamic_cast<B &>(p);
        (void) CaseB;
        std::cout << "Type of base = B" << std::endl;
    }
    catch (std::exception &e)
	{

    }
    try
	{
        C &CaseC = dynamic_cast<C &>(p);
        (void) CaseC;
        std::cout << "Type of base = C" << std::endl;
    }
    catch (std::exception &e)
	{
		
    }
}