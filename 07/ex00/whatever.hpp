/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:24:58 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/09 17:37:39 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T& v1, T& v2)
{
	T	temp;

	temp = v1;
	v1 = v2;
	v2 = temp;
}

template<typename T>
T	min(const T& v1, const T& v2)
{
	if (v1 < v2)
		return v1;
	return v2;
}

template<typename T>
T	max(const T& v1, const T& v2)
{
	if (v1 > v2)
		return v1;
	return v2;
}

#endif