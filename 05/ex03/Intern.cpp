/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:47:59 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/01 18:23:14 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const std::string	Intern::names[3] = {"shrubbery", "robotomy", "presidential"};
const CF			Intern::forms[3] = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};

Intern::Intern()
{
	std::cout << "New Intern created." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destroyed." << std::endl;
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern&	Intern::operator=(const Intern& other)
{
	if (this != &other) {}
	return *this;
}

AForm*	Intern::ShrubberyCreation(const std::string& target) const
{
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::RobotomyRequest(const std::string& target) const
{
	return new RobotomyRequestForm(target);
}

AForm*	Intern::PresidentialPardon(const std::string& target) const
{
	return new PresidentialPardonForm(target);
}

AForm	*Intern::makeForm(const std::string& name, const std::string& target) const
{
	for (int i = 0; i < 3; i++)
		if (names[i] == name)
			return (this->*(forms[i]))(target);
	throw FormNotFoundException();
}

const char*	Intern::FormNotFoundException::what() const throw()
{
	return "Form not found! May I bring you a coffee instead?";
}