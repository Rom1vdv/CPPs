/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:10:32 by romvan-d          #+#    #+#             */
/*   Updated: 2023/09/13 18:30:13 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

std::string TruncateStrIfTooLong(std::string GivenString, int EndIndex)
{
	std::string ModifiedString;

	if (GivenString.length() > EndIndex)
	{
		ModifiedString = GivenString.substr(0, 9);
		ModifiedString.replace(9, 1, ".");
		return ModifiedString;
	}
	else
	{
		return GivenString;
	}
}