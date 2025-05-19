/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:41:25 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/07 14:06:46 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Data.hpp"
#include "Serializer.hpp"


int	main(void)
{
	Data original = {"Romain", 29};
	uintptr_t tmp = Serializer::serialize(&original);
	Data* copy = Serializer::deserialize(tmp);

	std::cout << original.name << " - " << copy->name << std::endl;
	std::cout << original.value << " - " << copy->value << std::endl;

	return (0);
}