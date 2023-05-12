/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:15:05 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/12 14:04:26 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::vector<int> v;

	v.push_back(20);
	v.push_back(267);
	v.push_back(533);

	try
	{
		easyfind(v, 533);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "\n========================================\n\n";

	std::deque<int> d;

	d.push_back(43);
	d.push_front(67);
	d.push_back(53);
	d.push_front(32);

	try
	{
		easyfind(d, 53);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n========================================\n\n";

	std::list<int> l;

	l.push_back(43);
	l.push_front(67);
	l.push_back(53);
	l.push_front(32);

	try
	{
		easyfind(l, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}