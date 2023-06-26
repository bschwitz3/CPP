/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 21:54:46 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/26 23:00:47 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{}

RPN::~RPN()
{}

int	RPN::caluculRPN(std::string input)
{
	std::istringstream	iss(input);
	std::string			token;
	int					tmp;

	while (iss >> token)
	{
		if (isdigit(token[0]))
		{
			tmp = atoi(token.c_str());
			if (0 <= tmp && tmp < 10)
				_stack.push(tmp);
			else
				throw WrongArguments();
		}
		else if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			int	op1 = _stack.top();
			_stack.pop();
			int	op2 = _stack.top();
			_stack.pop();

			if (token == "+")
				_stack.push(op1 + op2);
			else if (token == "-")
				_stack.push(op2 - op1);
			else if (token == "*")
				_stack.push(op1 * op2);
			else if (token == "/")
				_stack.push(op2 / op1);
		}
		else
			throw WrongArguments();
	}
	if (_stack.size() != 1)
		throw Impossible();
	return (_stack.top());
}


