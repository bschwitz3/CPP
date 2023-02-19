/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:53:16 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/19 10:26:41 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// Creator / Destructor

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_gateKeeper = false;
	std::cout << "New ScavTrap created." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_gateKeeper = false;
	std::cout << "New Scavtrap called " << name << std::endl;

}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap : " << this->_name << " destroyed." << std::endl;
}

// Methods

void	ScavTrap::guardGate(void)
{
	this->_gateKeeper = true;
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}