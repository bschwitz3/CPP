/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:05:05 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/27 17:32:12 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <ctime>

#include <vector>
#include <deque>

template<class T>
class PmergeMe
{
	private:
		PmergeMe(const PmergeMe &src);
		PmergeMe	&operator=(const PmergeMe &src);

		static const int	_cut = 10;
		
		void	mergeInsertSort(T& c, int start, int end, int cut);
		void	insertSort(T &c, int start, int end);
		void	mergeSort(T &c, int start, int mid, int end);

	public:
		PmergeMe(){}
		~PmergeMe(){}

		void	Process(T &c);


};



#endif