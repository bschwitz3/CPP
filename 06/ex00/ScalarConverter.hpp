/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:34:30 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/02 16:52:59 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
	private:
		std::string const	_input;
		int					_int;
		char				_char;
		double				_double;
		float				_float;

	public:
		ScalarConverter();
		ScalarConverter(std::string input);
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter	&operator=(ScalarConverter const &src);

		std::string	getInput() const;

		void	convert(std::string input);

		int		to_char(const std::string &input);
		int		to_int(const std::string &input);
		int		to_float(const std::string &input);
		int		to_double(const std::string &input);
		
		class ImpossibleConvertion: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class NonDisplayable: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};




#endif