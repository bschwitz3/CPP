/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 21:54:42 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/26 22:45:26 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>

class RPN
{
	private:
		std::stack<int> _stack;
	
		RPN(const RPN &src);
		RPN	&operator=(const RPN &src);

	public:

		RPN();
		~RPN();

		int	caluculRPN(std::string input);

		class WrongArguments : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: wrong arguments.");
				}
		};

		class Impossible : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: impossible operation.");
				}
		};
};




#endif