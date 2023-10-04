/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:06:41 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/09 12:11:43 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//constructor / destructor
RobotomyRequestForm::RobotomyRequestForm(): AForm("Default Robotomy", 72, 45)
{
	this->_target = "default";
	std::cout << "Robotomy Request created as default, sign: 72, exec: 45." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy", 72, 45)
{
	this->_target = target;
	std::cout << "Robotomy Request created, sign: 72, exec: 45, target: " << target << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src):
	AForm(src.getName(), src.getGradeS(), src.getGradeE())
{
	this->_target = src.getTarget();
	std::cout << "New copy RobotomyRequestForm created with target : " << _target << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &src)
{
	this->_target = src.getTarget();
	std::cout << "RobotomyRequestForm assignation operator called";
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destroyed named : " << this->getName() << std::endl;
}

//methods
std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

const char	*RobotomyRequestForm::FailureException::what() const throw()
{
	return ("Robotomy failure.");
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if ((int)executor.getGrade() > this->getGradeE())
		throw (Bureaucrat::GradeTooLowException());
	else if (!this->getSigned())
		throw (AForm::FormNotSignedException());
	std::cout << "BRRRRRRRRRRRRRR (loud drilling noises)" << std::endl;
	std::srand(std::time(nullptr));
	int	random = std::rand() % 2;
	if (random)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		throw (RobotomyRequestForm::FailureException());
}