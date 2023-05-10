/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:35:45 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/11 00:11:49 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	Array<int>			intArray;
	Array<std::string>	stringArray(10);
	Array<std::string>	stringArray2;

	stringArray[0] = "Salut";
	stringArray[1] = "ça";
	stringArray[2] = "va";
	stringArray[3] = "mon";
	stringArray[4] = "pote";
	stringArray[5] = "?";
	std::cout << "intArray.size() = " << intArray.size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
	stringArray2 = stringArray;
	stringArray2[3] = "ça roule merci !";

	try
	{
		// std::cout << stringArray[59] << std::endl;
		// std::cout << stringArray2[-3] << std::endl;
		std::cout << stringArray2[0] << std::endl;
		std::cout << stringArray2[1] << std::endl;
		std::cout << stringArray2[2] << std::endl;
		std::cout << stringArray2[3] << std::endl;
		std::cout << stringArray2[4] << std::endl;
		std::cout << stringArray2[5] << std::endl;
		std::cout << stringArray2[6] << std::endl;
		std::cout << stringArray2[7] << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}