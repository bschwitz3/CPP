/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:03:08 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/02 12:34:55 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// constructor / destructor / assigment
ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(std::string input): _input(input)
{
	convert(this->_input);
	printConvertion();
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter const &src): _input(src.getInput())
{
	*this = src;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &src)
{
	if (this == &src) {}
		return *this;
}

// methods
std::string	ScalarConverter::getInput() const
{
	return (this->_input);
}


void	ScalarConverter::convert(std::string input)
{
	this->_int = to_int(input);
	this->_char = to_char(input);
	this->_double = to_double(input);
	this->_float = to_float(input);
}

void	ScalarConverter::printConvertion(void) const
{
	std::cout << "int : " << this->_int << std::endl;
	std::cout << "char : " << this->_char << std::endl;
	std::cout << "double : " << this->_double << std::endl;
	std::cout << "float : " << this->_float << std::endl;
}

const char	*ScalarConverter::ImpossibleConvertion::what() const throw()
{
	return ("Impossible convertion");
}

int		ScalarConverter::to_int(const std::string &input)
{
	return (std::atoi(input.c_str()));
}

char	ScalarConverter::to_char(const std::string &input)
{
	return (static_cast<char>(input[0]));
}

double	ScalarConverter::to_double(const std::string &input)
{
	return (static_cast<double>(std::atof(input.c_str())));
}

float	ScalarConverter::to_float(const std::string &input)
{
	return (static_cast<float>(std::atof(input.c_str())));
}