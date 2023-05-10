/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:29:48 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/10 13:23:04 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	data;
	data.name = "bastien";
	data.age = 22;
	data.member = true;

	Data	*data_copy = NULL;

	std::cout << "New Data created [data] :" << std::endl << \
		"name : " << data.name << std::endl << \
		"age : " << data.age << std::endl << \
		"is member [0 = no ; 1 = yes] : " << data.member << std::endl << \
		"data address is : " << &data << std::endl;

	std::cout << std::endl << "New Data created [data_copy] :" << std::endl << \
		"data_copy address is : " << data_copy << std::endl;

	std::cout << std::endl << "=======================================" << std::endl << std::endl;

	uintptr_t	temp;
	Serializer	s;

	std::cout << "data is serialize to [uintptr_t] temp" << std::endl;
	temp = s.serialize(&data);

	std::cout << "temp is now : " << temp << std::endl;

	std::cout << "temp is deserialize to data_copy" << std::endl;
	data_copy = s.deserialize(temp);

	std::cout << std::endl << "=======================================" << std::endl << std::endl;

	std::cout << "data_copy is :" << std::endl << \
		"name : " << data_copy->name << std::endl << \
		"age : " << data_copy->age << std::endl << \
		"is member [0 = no ; 1 = yes] : " << data_copy->member << std::endl << \
		"data_copy address is : " << &data << std::endl;

	return (0);
}