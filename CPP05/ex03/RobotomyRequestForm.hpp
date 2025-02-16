/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 23:10:21 by rom1              #+#    #+#             */
/*   Updated: 2025/02/16 23:19:06 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm  
{

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & other);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator=( const RobotomyRequestForm & other);

		virtual void	execute(Bureaucrat const & executor) const;

		private:
			const std::string target;
};

#endif