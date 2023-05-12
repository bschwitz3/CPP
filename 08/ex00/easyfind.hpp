/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:59:12 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/12 14:04:26 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

#include <vector>
#include <deque>
#include <list>


class NoOccurenceException : public std::exception
{
	virtual const char *what() const throw()
	{
		return ("No occurence find.");
	}
};


template<typename T>
void	easyfind(T& container, int num)
{
	for (typename T::iterator it = container.begin(); it != container.end(); ++it)
	{
		if (*it == num)
		{
			std::cout << "Occurence has been find !" << std::endl;
			return;
		}
	}
	throw NoOccurenceException();
}

















#endif