/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:16:25 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/26 19:21:12 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

class Bitcoin
{
	private:
		std::map <std::string, double> _data;

		Bitcoin();
		Bitcoin(const Bitcoin &src);
		Bitcoin	&operator=(const Bitcoin &src);

		bool	ValidDate(const std::string date);
		bool	ValidValue(const double value);

		double	getRate(const std::string date);

	public:

		Bitcoin(const std::string filename);
		~Bitcoin();

		void	Exchange(const std::string filename);

		class WrongDate: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Error: wrong date.");
				}
		};

		class WrongRate: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Error: wrong rate.");
				}
		};

		class BadInput: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Error: bad input");
				}
		};

		class BadDelimiter: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Error: bad Delimiter, expected '|'.");
				}
		};

		class WrongValue: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Error: wrong value.");
				}
		};
};

bool	Bissextille(int year);



#endif