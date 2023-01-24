/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:01:06 by bschwitz          #+#    #+#             */
/*   Updated: 2023/01/24 17:24:11 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&_weapon;
		std::string	_name;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void);
		void	setWeapon(Weapon weapon);
};

#endif