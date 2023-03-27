/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:44:25 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/27 15:18:09 by bschwitz         ###   ########.fr       */
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

		Cat & operator=(Cat const & rhs);
		void makeSound() const;
		std::string getType( void ) const;
		Brain *getBrain( void ) const;
		void compareTo(Cat const & other_cat) const;
};

#endif