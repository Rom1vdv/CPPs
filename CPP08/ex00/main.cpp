/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:38:17 by romvan-d          #+#    #+#             */
/*   Updated: 2025/05/08 16:45:20 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
    std::cout << "----------Vector------------" << std::endl;
    std::vector<int> vector;
    for (int i = 0; i < 5; i++)
	{
        vector.push_back(i);
    }
    try
	{
        easyfind(vector, 4);
        easyfind(vector, 8);
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------List------------" << std::endl;
    std::list<int> listCont;
    for (int i = 0; i < 5; i++)
	{
        listCont.push_back(i);
    }
    try
	{
        easyfind(listCont, 4);
        easyfind(listCont, 8);
    }
    catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
}