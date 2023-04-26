/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:46:43 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/26 13:30:49 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//constructors
Form::Form(): _name("Default"), _gradeS(1), _gradeE(1), _signed(false)
{
	std::cout << "Default Form created with grades at 1.";
}

Form::Form(std::string name, int gradeS, int gradeE) : _name(name),
	_gradeS(gradeS), _gradeE(gradeE), _signed(false)
{
	checkGrade(this->getGradeS());
	checkGrade(this->getGradeE());
	std::cout << "New Form, name : " << this->_name << ", not signed, grade to sign :"
	<< this->_gradeS << ", grade to execute : " << this->_gradeE << std::endl;
}


Form::Form(Form &src): _name(src._name), _signed(false), _gradeS(src._gradeS),
	_gradeE(src._gradeE)
{
	std::cout << "New copy of a Form, name : " << this->_name << ", not signed, grade to sign :"
	<< this->_gradeS << ", grade to execute : " << this->_gradeE << std::endl;
}

Form	&Form::operator=(Form const &src)
{
	if (this != &src) {}
	return (*this);
}


//destructor
Form::~Form()
{
	std::cout << "Form : " << this->_name << " destroyed." << std::endl;
}


//methods
std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getGradeS() const
{
	return (this->_gradeS);
}

int	Form::getGradeE() const
{
	return (this->_gradeE);
}


const char	*Form::GradeToHighException::what() const throw()
{
	return ("Form grade too high.");
}
const char	*Form::GradeToLowException::what() const throw()
{
	return ("Form grade too low.");
}
const char	*Form::AlreadySignedException::what() const throw()
{
	return ("Form already signed.");
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (_signed)
		throw AlreadySignedException();
	if (_gradeS < bureaucrat.getGrade())
		throw GradeToLowException();
	_signed = true;
}

//fonctions
void	checkGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeToHighException();
	else if (grade > 150)
		throw Form::GradeToLowException();
}

std::ostream	&operator<<(std::ostream &o, Form &f)
{
	o << "Form " << f.getName() << ", is signed : " << f.getSigned() << ", grade required to sign : "
	<< f.getGradeS() << ", grade required to execute : " << f.getGradeE() << std::endl;
	return o;
}