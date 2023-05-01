/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:57:47 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/01 13:50:33 by bschwitz         ###   ########.fr       */
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
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << this->getName() << ", created with a grade of "
	<< this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src.getName() + "_copy"), _grade(src.getGrade())
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
		this->_grade = src.getGrade();
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

void	Bureaucrat::signAForm(AForm &Aform)
{
	try
	{
		Aform.beSigned(*this);
		std::cout << _name << " signs " << Aform.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " cannot sign " << Aform.getName() << " because "
		<< e.what() << std::endl;
	}
	
}

void	Bureaucrat::executeForm(AForm &Aform)
{
	try
	{
		Aform.execute(*this);
		std::cout << this->_name << " successfully executed " << Aform.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}


//function
std::ostream	&operator<<(std::ostream &o, Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat of grade " << b.getGrade() << std::endl;
	return o;
}