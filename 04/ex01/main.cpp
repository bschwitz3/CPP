/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:06:59 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/27 15:04:13 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;

	std::cout << std::endl;
	std::cout << std::endl;

	Dog medor;
	Cat felix;

	Dog & medor_ref = medor;
	Cat & felix_ref = felix;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog medor_copy(medor_ref);
	Cat felix_copy(felix_ref);

	Dog & medor_copy_ref = medor_copy;
	Cat & felix_copy_ref = felix_copy;

	std::cout << std::endl << "comparing" << std::endl;
	medor.compareTo(medor_copy_ref);
	felix.compareTo(felix_copy_ref);
	std::cout << std::endl;

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