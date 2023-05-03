/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:03:08 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/03 16:40:28 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// constructor / destructor / assigment
ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(std::string input): _input(input)
{
	convert(this->_input);
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

	std::cout << "char : ";
	try
	{
		to_char(input);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl << "int : ";
	try
	{
		to_int(input);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl << "float : ";
	try
	{
		to_float(input);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl << "double : ";
	try
	{
		to_double(input);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << std::endl;
}


int	ScalarConverter::to_char(const std::string &input)
{
	try
	{
		this->_char = std::stoi(input);
	}
	catch(const std::exception& e)
	{
		throw ImpossibleConvertion();
		std::cout << e.what();
		return (0);
	}
	try
	{
		if (this->_char < 0)
			throw ImpossibleConvertion();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what();
		return (0);
	}
	try
	{
		if (this->_char < 32 || this->_char > 126)
				throw NonDisplayable();
		std::cout << "'" << this->_char << "'";
	}
	catch (const std::exception &e)
	{
		std::cout << e.what(); 
	}
	return (0);
}

int	ScalarConverter::to_int(const std::string &input)
{
	try
	{
		this->_int = std::stoi(input);
	}
	catch(const std::exception &e)
	{
		throw ImpossibleConvertion();
		std::cout << e.what();
		return (0);
	}
	try
	{
		if (this->_int == -1)
			throw ImpossibleConvertion();
		std::cout << this->_int;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
		return (0);
	}
	return (0);
}

int	ScalarConverter::to_float(const std::string &input)
{
	if (input == "nan")
	{
		std::cout << "nanf";
		return (0);
	}
	try
	{
		this->_float = std::stof(input);
	}
	catch (const std::exception &e)
	{
		throw ImpossibleConvertion();
		std::cout << e.what();
		return (0);
	}
	try
	{
		if (this->_float == -1)
			throw ImpossibleConvertion();
		std::cout << this->_float;
		(this->_float - floor(this->_float)) > 0.0f ? std::cout << "f" : std::cout << ".0f";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
		return (0);
	}
	return (0);
}

int	ScalarConverter::to_double(const std::string &input)
{
	if (input == "nan")
	{
		std::cout << "nan";
		return (0);
	}
	try
	{
		this->_double = std::stod(input);
	}
	catch(const std::exception& e)
	{
		throw ImpossibleConvertion();
		std::cout << e.what();
		return (0);
	}
	try
	{
		if (this->_double == -1)
			throw ImpossibleConvertion();
		std::cout << this->_double;
		if (!((this->_double - floor(this->_double)) > 0.0f))
			std::cout << ".0";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
		return (0);
	}
	return (0);
}


const char	*ScalarConverter::ImpossibleConvertion::what() const throw()
{
	return ("Impossible");
}

const char	*ScalarConverter::NonDisplayable::what() const throw()
{
	return ("Non displayable");
}