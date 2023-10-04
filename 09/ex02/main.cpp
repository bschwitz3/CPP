/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:24:30 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/27 18:43:01 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<class T>
void	printContainer(const std::string msg, T &c)
{
	typedef typename T::const_iterator const_iterator;

	std::cout << msg;
	for (const_iterator it = c.begin(); it != c.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template<class T>
double	launchProcess(T &c)
{
	PmergeMe<T> pmergeMe;
	std::clock_t start = clock();
	pmergeMe.Process(c);
	std::clock_t end = clock();
	return (end - start);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error: arguments missing." << std::endl;
		return 1;
	}
	
	std::vector<int> v;
	std::deque<int> d;

	for (int i = 1; i < ac; ++i)
	{
		std::stringstream ss(av[i]);
		int num;
		if (!(ss >> num) || !ss.eof())
		{
			std::cerr << "Error: Invalid input." << std::endl;
			return 1;
		}
		if (num < 0)
		{
			std::cerr << "Error: negative number found." << std::endl;
			return 1;
		}
		v.push_back(num);
		d.push_back(num);
	}

	printContainer("Before : ", v);

	double	time_v = launchProcess(v);
	double	time_d = launchProcess(d);

	printContainer("After : ", v);

	std::cout << "Time to process a range of " << v.size() << "  elements with std::vector : " << time_v << " us" << std::endl;
	std::cout << "Time to process a range of " << d.size() << "  elements with std::deque : " << time_d << " us" << std::endl;
	
	return 0;
}