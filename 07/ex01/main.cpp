/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:19:28 by bschwitz          #+#    #+#             */
/*   Updated: 2023/05/09 18:43:33 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	ft_tolower(char &ref)
{
	ref = std::tolower(ref);
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

	return 0;
}