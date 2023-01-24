/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:02:42 by bschwitz          #+#    #+#             */
/*   Updated: 2023/01/24 16:34:29 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";	//• Une variable de type string initialisée à "HI THIS IS BRAIN".
	std::string	*stringPTR = &str;					//• stringPTR : Un pointeur sur la string.
	std::string	&stringREF	= str;					//• stringREF : Une référence sur la string.

	std::cout << std::endl << "Adresse de la string en mémoire : " << &str << std::endl;
	std::cout << "Adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "Adresse stockée dans stringREF : " << &stringREF << std::endl << std::endl;

	std::cout << "La valeur de la string : " << str << std::endl;
	std::cout << "La valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF : " << stringREF << std::endl << std::endl;
	return (0);
}