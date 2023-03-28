/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:06:59 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 10:34:54 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	std::cout << "Animal->getType " << animal->getType() << std::endl;
	std::cout << "Dog->getType " << dog->getType() << std::endl;
	std::cout << "Cat->getType " << cat->getType() << std::endl;

	std::cout << std::endl;

	animal->makeSound();
	cat->makeSound();
	dog->makeSound();

	std::cout << std::endl;


	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;

	wrong_cat->makeSound();
	wrong_animal->makeSound();

	std::cout << std::endl;
	
	delete animal;
	delete dog;
	delete cat;
	delete wrong_cat;
	delete wrong_animal;
}