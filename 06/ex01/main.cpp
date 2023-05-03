/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:29:48 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/03 17:38:05 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	data;
	data.name = "bastien";
	data.age = 22;
	data.member = true;

	std::cout << new

	Data	*data_copy;
	
	uintptr_t	temp;

	Serializer	s;

	temp = s.serialize(&data);
	data_copy = s.deserialize(temp);



}