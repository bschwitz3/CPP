/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:59:05 by bschwitz          #+#    #+#             */
/*   Updated: 2023/06/27 17:34:02 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<class T>
void	PmergeMe<T>::mergeInsertSort(T& c, int start, int end, int cut)
{
	cut = _cut;
	if (start < end)
	{
		if (end - start < cut)
			insertSort(c, start, end);
		else
		{
			int mid = start + (end - start) / 2;
			mergeInsertSort(c, start, mid, cut);
			mergeInsertSort(c, mid + 1, end, cut);
			mergeSort(c, start, mid, end);
		}
	}
}

template<class T>
void	PmergeMe<T>::insertSort(T &c, int start, int end)
{
	for (int i = start + 1; i <= end; ++i)
	{
		int key = c[i];
		int j = i - 1;
		for (; j >= start && c[j] > key; --j)
			c[j + 1] = c[j];
		c[j + 1] = key;
	}
}

template<class T>
void	PmergeMe<T>::mergeSort(T &c, int start, int mid, int end)
{
	int i, j, k;
	int n1 = mid - start + 1;
	int n2 = end - mid;
	
	T left(n1), right(n2);
	
	for (i = 0; i < n1; ++i)
		left[i] = c[start + i];
	for (j = 0; j < n2; ++j)
		right[j] = c[mid + 1 + j];

	i = 0;
	j = 0;
	k = start;
	while (i < n1 && j < n2)
	{
		if (left[i] <= right[j])
			c[k++] = left[i++];
		else
			c[k++] = right[j++];
	}
	while (i < n1)
		c[k++] = left[i++];
	while (j < n2)
		c[k++] = right[j++];
}


template<class T>
void	PmergeMe<T>::Process(T &c)
{
	mergeInsertSort(c, 0, c.size() - 1, this->_cut);
}

template class PmergeMe<std::vector<int> >;
template class PmergeMe<std::deque<int> >;