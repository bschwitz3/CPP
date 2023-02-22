/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:03:45 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/22 13:09:15 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string name)
{
	this->_type = name;
	std::cout << "New Cat created." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed." << std::endl;
}