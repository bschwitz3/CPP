/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:15:46 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/21 12:30:17 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>

class MutantStack : public std::stack<T>
{
	public:
		typedef std::stack<T> stack;
		typedef typename stack::container_type container;
		typedef typename container::iterator iterator;

		MutantStack()
		{}
		MutantStack(const MutantStack &src): stack(src)
		{}
		~MutantStack()
		{}
		MutantStack	&operator=(const MutantStack &src)
		{
			if (*this != src)
				*this = src;
			return (*this);
		}

		iterator begin()
		{
			return (stack::c.begin());
		}
		iterator end()
		{
			return (stack::c.end());
		}
};



#endif