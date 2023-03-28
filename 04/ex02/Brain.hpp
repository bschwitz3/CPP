/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:07:24 by bschwitz          #+#    #+#             */
/*   Updated: 2023/03/28 11:48:54 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	*_ideas;
	public:
		Brain();
		~Brain();
		Brain(Brain & ref);
		Brain & operator=(Brain const & ref);
		
		std::string *getIdeas();
};

#endif