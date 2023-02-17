/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:53:16 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/17 13:55:21 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// Creator / Destructor

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "New ScavTrap created." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "New Scavtrap called " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap : " << this->_name << " destroyed." << std::endl;
}

// Methods

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}