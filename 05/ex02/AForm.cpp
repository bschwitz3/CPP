/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:46:43 by bschwitz          #+#    #+#             */
/*   Updated: 2023/04/27 13:41:32 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//constructors
AForm::AForm(): _name("Default"), _signed(false), _gradeS(1), _gradeE(1)
{
	std::cout << "Default AForm created with grades at 1.";
}

AForm::AForm(std::string name, int gradeS, int gradeE) : _name(name),
	_signed(false), _gradeS(gradeS), _gradeE(gradeE)
{
	checkGrade(this->getGradeS());
	checkGrade(this->getGradeE());
	std::cout << "New AForm, name : " << this->_name << ", not signed, grade to sign :"
	<< this->_gradeS << ", grade to execute : " << this->_gradeE << std::endl;
}


AForm::AForm(AForm &src): _name(src._name), _signed(false), _gradeS(src._gradeS),
	_gradeE(src._gradeE)
{
	std::cout << "New copy of a AForm, name : " << this->_name << ", not signed, grade to sign :"
	<< this->_gradeS << ", grade to execute : " << this->_gradeE << std::endl;
}

AForm	&AForm::operator=(AForm const &src)
{
	if (this != &src) {}
	return (*this);
}


//destructor
AForm::~AForm()
{
	std::cout << "AForm : " << this->_name << " destroyed." << std::endl;
}


//methods
std::string	AForm::getName() const
{
	return (this->_name);
}

std::string	AForm::getSigned() const
{
	if (this->_signed)
		return ("YES");
	else
		return ("NO");
}

int	AForm::getGradeS() const
{
	return (this->_gradeS);
}

int	AForm::getGradeE() const
{
	return (this->_gradeE);
}


const char	*AForm::GradeToHighException::what() const throw()
{
	return ("AForm grade too high.");
}
const char	*AForm::GradeToLowException::what() const throw()
{
	return ("AForm grade too low.");
}
const char	*AForm::AlreadySignedException::what() const throw()
{
	return ("AForm already signed.");
}
const char	*AForm::FormNotSignedException::what() const throw()
{
	return ("AForm need to be signed before execution.");
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (_signed)
		throw AlreadySignedException();
	if (_gradeS < bureaucrat.getGrade())
		throw GradeToHighException();
	_signed = true;
}

//fonctions
void	checkGrade(int grade)
{
	if (grade < 1)
		throw AForm::GradeToHighException();
	else if (grade > 150)
		throw AForm::GradeToLowException();
}

std::ostream	&operator<<(std::ostream &o, AForm &f)
{
	o << "AForm " << f.getName() << ", is signed : " << f.getSigned() << ", grade required to sign : "
	<< f.getGradeS() << ", grade required to execute : " << f.getGradeE() << std::endl;
	return o;
}