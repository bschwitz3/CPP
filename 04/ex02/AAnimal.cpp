/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:05:52 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 11:42:15 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->_type = "Aanimal";
	std::cout << "AAnimal created\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed\n";
}

AAnimal::AAnimal(AAnimal const & ref)
{
	this->_type = ref.getType();
	std::cout << "AAnimal created from a copy\n";
}

AAnimal & AAnimal::operator=(AAnimal const & ref)
{
	this->_type = ref.getType();
	return (*this);
}

void AAnimal::makeSound() const
{
	std::cout << "this AAnimal is not a cat or dog, set it to hear his noise\n";
}

std::string AAnimal::getType( void ) const
{
	return (this->_type);
}