/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:19:28 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/10 17:36:15 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	ft_tolower(char &ref)
{
	ref = std::tolower(ref);
}

void	ft_toupper(std::string &ref)
{
	for (unsigned long i = 0; i < ref.size(); i++)
		ref[i] = std::toupper(ref[i]);
}

int	main()
{
	char		letter[] = {'A', 'B', 'C'};
	size_t		i = 3;

	std::cout << "letter[0] = " << letter[0] << std::endl;
	std::cout << "letter[1] = " << letter[1] << std::endl;
	std::cout << "letter[2] = " << letter[2] << std::endl << std::endl;

	std::cout << "iter(letter, i, ft_tolower)" << std::endl << std::endl;
	::iter(letter, i, ft_tolower);

	std::cout << "letter[0] = " << letter[0] << std::endl;
	std::cout << "letter[1] = " << letter[1] << std::endl;
	std::cout << "letter[2] = " << letter[2] << std::endl << std::endl;

	std::cout << std::endl << "====================================" << std::endl << std::endl;

	std::string	chaine[] = {"salut", "mon", "pote", "!"};
	size_t		j = 4;

	std::cout << "chaine[0] = " << chaine[0] << std::endl;
	std::cout << "chaine[1] = " << chaine[1] << std::endl;
	std::cout << "chaine[2] = " << chaine[2] << std::endl;
	std::cout << "chaine[3] = " << chaine[3] << std::endl << std::endl;

	std::cout << "iter(chaine, j, ft_toupper)" << std::endl << std::endl;
	::iter(chaine, j, ft_toupper);

	std::cout << "chaine[0] = " << chaine[0] << std::endl;
	std::cout << "chaine[1] = " << chaine[1] << std::endl;
	std::cout << "chaine[2] = " << chaine[2] << std::endl;
	std::cout << "chaine[3] = " << chaine[3] << std::endl << std::endl;

	return 0;
}