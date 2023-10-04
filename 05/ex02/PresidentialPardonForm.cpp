/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:07:40 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/09 12:09:55 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//constructor / destructor
PresidentialPardonForm::PresidentialPardonForm(): AForm("Default Presidential", 25, 5)
{
	this->_target = "default";
	std::cout << "Presidential Pardon created as default, sign: 25, exec: 5." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential", 25, 5)
{
	this->_target = target;
	std::cout << "Presidential Pardon created, sign: 25, exec: 5, target: " << target << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src):
	AForm(src.getName(), src.getGradeS(), src.getGradeE())
{
	this->_target = src.getTarget();
	std::cout << "New copy PresidentialPardon created with target : " << _target << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm &src)
{
	this->_target = src.getTarget();
	std::cout << "PresidentialPardonForm assignation operator called";
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon destroyed named : " << this->getName() << std::endl;
}

//methods
std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeE())
		throw (Bureaucrat::GradeTooLowException());
	else if (!this->getSigned())
		throw (AForm::FormNotSignedException());
	else
		std::cout << this->_target << " was pardonned by Zafod Beeblebrox." << std::endl;
}