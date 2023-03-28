/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:06:59 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 11:37:31 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	// BASIC
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;
	delete dog;
	delete cat;

	std::cout << std::endl;
	std::cout << std::endl;

	// REF & COPY
	Dog medor;
	Cat felix;

	felix.printBrain();
	std::cout << std::endl;

	Dog & medor_ref = medor;
	Cat & felix_ref = felix;

	felix_ref.printBrain();

	Dog medor_copy(medor_ref);
	Cat felix_copy(felix_ref);

	felix_copy.printBrain();

	std::cout << std::endl;

	// TABLEAU
	const Animal	*(animal_array[4]);
	std::cout << std::endl;

	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;
}