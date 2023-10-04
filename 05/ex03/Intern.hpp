/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:48:01 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/09 12:22:07 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern;

typedef AForm* (Intern::*TF)(const std::string&) const;

class Intern
{
	private:
		static const std::string	names[3];
		static const TF				forms[3];

		AForm*	ShrubberyCreation(const std::string& target) const;
		AForm*	RobotomyRequest(const std::string& target) const;
		AForm*	PresidentialPardon(const std::string& target) const;
	public:
		Intern();
		Intern(Intern const &src);
		Intern	&operator=(Intern const &src);
		~Intern();

		AForm	*makeForm(const std::string &name, const std::string &target) const;

		class FormNotFoundException : public std::exception
		{
			virtual const char	*what() const throw();
		};
};


#endif