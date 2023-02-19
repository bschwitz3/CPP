/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:16:39 by bschwitz          #+#    #+#             */
/*   Updated: 2023/02/19 10:40:18 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class	FlagTrap : public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(std::string name);
		~FlagTrap();

		void	highFivesGuys(void);
};

#endif