/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:47 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/25 17:56:48 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrate.hpp"

//constructors
Bureaucrate::Bureaucrate(void): _name("Default"), _grade(150)
{
	std::cout << "Bureaucrate " << this->getName() << ", created with a grade of "
	<< this->getGrade() << std::endl; 
}

Bureaucrate::Bureaucrate(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrate " << this->getName() << ", created with a grade of "
	<< this->getGrade() << std::endl;
}

Bureaucrate::Bureaucrate(const Bureaucrate &src): _name(src.getName()), _grade(src.getGrade())
{
	std::cout << "Bureaucrate " << this->getName() << ", created with a grade of "
	<< this->getGrade() << std::endl;
}

//destructor
Bureaucrate::~Bureaucrate(void)
{
	std::cout << "Bureaucrate " << this->getName() << ", destroyed." << std::endl;
}


//methods
std::string	Bureaucrate::getName(void) const
{
	return (this->_name);
}

int	Bureaucrate::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrate::incrementGrade(int count)
{
	this->_grade-= count;
	if (this->_grade < 1)
		throw GradeTooHighException();
	if (this->_grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrate " << this->_name << " increment his grade by " << count
	<< ", his grade is now at " << this->_grade << std::endl;
}

void	Bureaucrate::decrementGrade(int count)
{
	this->_grade+= count;
	if (this->_grade < 1)
		throw GradeTooHighException();
	if (this->_grade > 150)
		throw GradeTooLowException();
}

const char	*Bureaucrate::GradeTooHighException::what() const throw()
{
	return ("Bureaucrate grade to high.");
}

const char	*Bureaucrate::GradeTooLowException::what() const throw()
{
	return ("Bureaucrate grade to low.");
}

std::ostream	&operator<<(std::ostream &o, Bureaucrate &b)
{
	o << b.getName() << ", bureaucrat of grade " << b.getGrade() << std::endl;
	return o;
}