/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:10:41 by bschwitz          #+#    #+#             */
/*   Updated: 2023/01/24 15:59:27 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
	int	size(10);

	Zombie *horde = zombieHorde(size, "Bastien");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}