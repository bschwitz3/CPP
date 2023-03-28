/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:44:25 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 11:48:13 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
	
		Cat(Cat & ref);
		Cat & operator=(Cat const & ref);

		void makeSound() const;
		std::string getType(void) const;
		Brain *getBrain(void) const;

		void		printBrain(void) const;
};

#endif