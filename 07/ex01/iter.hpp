/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:42:06 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/09 18:40:44 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T array[], size_t lenght, void (*foo)(T &))
{
	if (!array || !foo)
		return;
	for (size_t i = 0; i < lenght; i++)
		foo(array[i]);
}

#endif