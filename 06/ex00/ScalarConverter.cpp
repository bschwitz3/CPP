/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:03:08 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/10 13:12:09 by bschwitz         ###   ########.fr       */
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
	to_char(input);
	std::cout << std::endl << "int : ";
	to_int(input);
	std::cout << std::endl << "float : ";
	to_float(input);
	std::cout << std::endl << "double : ";
	to_double(input);
	std::cout << std::endl;
}


void	ScalarConverter::to_char(const std::string &input)
{
	try
	{
		try
		{
			this->_char = std::stoi(input);
			if (this->_char == 0)
				throw NonDisplayable();
			if (!this->_char || this->_char < 0)
				throw ImpossibleConvertion();
			if (this->_char < 32 || this->_char > 126)
				throw NonDisplayable();
			std::cout << "'" << this->_char << "'";
		}
		catch(const std::invalid_argument& e)
		{
			throw ImpossibleConvertion();
		}
		catch(const std::out_of_range& e)
		{
			throw ImpossibleConvertion();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
	
}

void	ScalarConverter::to_int(const std::string &input)
{
	try
	{
		try
		{
			this->_int = std::stoi(input);
			if (this->_int == -1)
				throw ImpossibleConvertion();
			std::cout << this->_int;
		}
		catch(const std::invalid_argument& e)
		{
			throw ImpossibleConvertion();
		}
		catch(const std::out_of_range& e)
		{
			throw ImpossibleConvertion();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what();
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
	}
}

void	ScalarConverter::to_float(const std::string &input)
{
	try
	{
		try
		{
			if (input == "nan" || input == "-inf" || input == "+inf")
			{
				std::cout << input + 'f';
				return;
			}
			else if (input == "nanf" || input == "-inff" || input == "+inff")
			{
				std::cout << input;
				return;
			}
			this->_float = std::stof(input);
			if (!this->_float)
				throw ImpossibleConvertion();
			if (this->_float == -1)
				throw ImpossibleConvertion();
			std::cout << this->_float;
			(this->_float - floor(this->_float)) > 0.0f ? std::cout << "f" : std::cout << ".0f";
		}
		catch(const std::invalid_argument& e)
		{
			throw ImpossibleConvertion();
		}
		catch(const std::out_of_range& e)
		{
			throw ImpossibleConvertion();
		}
		catch(const std::exception& e)
		{
			std::cout << e.what();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}

void	ScalarConverter::to_double(const std::string &input)
{
	try
	{
		try
		{
			if (input == "nan" || input == "-inf" || input == "+inf")
			{
				std::cout << input;
				return;
			}
			else if (input == "nanf" || input == "-inff" || input == "+inff")
			{
				std::string s = input;
				std::cout << s.erase(input.size() - 1);
				return;
			}
			this->_double = std::stod(input);
			if (!this->_double || this->_double == -1)
				throw ImpossibleConvertion();
			std::cout << this->_double;
			if (!((this->_double - floor(this->_double)) > 0.0f))
			std::cout << ".0";
		}
		catch(const std::invalid_argument& e)
		{
			throw ImpossibleConvertion();
		}
		catch(const std::out_of_range& e)
		{
			throw ImpossibleConvertion();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
}

const char	*ScalarConverter::ImpossibleConvertion::what() const throw()
{
	return ("Impossible");
}

const char	*ScalarConverter::NonDisplayable::what() const throw()
{
	return ("Non displayable");
}