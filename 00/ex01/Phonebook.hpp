/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:35:11 by bschwitz          #+#    #+#             */
/*   Updated: 2023/01/23 16:16:54 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact	_contacts[8];
		int		_index;

	public:
		Phonebook(void);
		~Phonebook(void);
		
		void	add(void);
		void	search(void);
		void	print(Contact contact);

		Contact	get_contact(int index);
};

std::string	add_spaces(int n);
std::string	fix_width(std::string str, long unsigned max);
int			search_ui(Contact contacts[8]);

#endif