/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:29:59 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/07 14:31:27 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate();
void identify(Base *p);
void identify(Base &p);

int	main( void ) {
	std::srand(std::time(0));
	Base* first = generate();
	identify(first);
	identify(*first);
	delete first;
	Base* second = generate();
	identify(second);
	identify(*second);
	delete second;
	Base* third = generate();
	identify(third);
	identify(*third);
	delete third;
	return (0);
}