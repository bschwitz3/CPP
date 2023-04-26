/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:47 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/26 11:32:06 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//constructors
Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat " << this->getName() << ", created with a grade of "
	<< this->getGrade() << std::endl; 
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << this->getName() << ", created with a grade of "
	<< this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src.getName()), _grade(src.getGrade())
{
	std::cout << "Bureaucrat " << this->getName() << ", created with a grade of "
	<< this->getGrade() << std::endl;
}

//destructor
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << this->getName() << ", destroyed." << std::endl;
}


//methods
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		this->_grade = src._grade;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(int count)
{
	this->_grade-= count;
	if (this->_grade < 1)
		throw GradeTooHighException();
	if (this->_grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << this->_name << " increment his grade by " << count
	<< ", his grade is now at " << this->_grade << std::endl;
}

void	Bureaucrat::decrementGrade(int count)
{
	this->_grade+= count;
	if (this->_grade < 1)
		throw GradeTooHighException();
	if (this->_grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << this->_name << " decrement his grade by " << count
	<< ", his grade is now at " << this->_grade << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade to high.");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade to low.");
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat of grade " << b.getGrade() << std::endl;
	return o;
}