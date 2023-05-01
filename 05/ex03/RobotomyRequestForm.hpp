/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:05:56 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/01 12:58:59 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class AForm;
class Bureaucrate;

class RobotomyRequestForm: public AForm
{
	private:
		std::string	_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &src);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=( const RobotomyRequestForm &src);

		std::string	getTarget() const;

		class FailureException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		void	execute(Bureaucrat const &executor) const;
	
};

#endif