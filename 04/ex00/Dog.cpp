/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:09:25 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/22 13:28:10 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string name)
{
	this->_type = name;
	std::cout << "New Dog created." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed." << std::endl;
}