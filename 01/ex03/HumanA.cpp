/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:05:03 by bschwitz          #+#    #+#             */
/*   Updated: 2023/01/24 18:00:46 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon), _name(name)
{
	std::cout << "HumanA " << name << " created with " << weapon.getType() \
		<< std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destroyed." << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << \
		this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}
