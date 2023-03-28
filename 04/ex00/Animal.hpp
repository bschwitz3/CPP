/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:14:53 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 10:29:51 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal & ref);
		Animal & operator=(Animal const & ref);

		virtual void		makeSound() const;
		virtual std::string	getType() const;
};

#endif
