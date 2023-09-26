/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:51:03 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/26 19:38:57 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(void)
{
	Harl NewHarl;
	NewHarl.complain("ERROR");
	NewHarl.complain("INFO");
	NewHarl.complain("DEBUG");
	NewHarl.complain("WARNING");
	NewHarl.complain("HELLO");
	NewHarl.complain("wtf");
	return 0;
}