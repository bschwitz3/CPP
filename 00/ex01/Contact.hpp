/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:33:28 by bschwitz          #+#    #+#             */
/*   Updated: 2023/01/23 15:39:25 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darketsecret;
	
	public:
		Contact(void);
		~Contact(void);

		void		set_firstname(std::string str);
		void		set_lastname(std::string str);
		void		set_nickname(std::string str);
		void		set_phonenumber(std::string str);
		void		set_darkestsecret(std::string str);
		std::string	get_firstname(void) const;
		std::string	get_lastname(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phonenumber(void) const;
		std::string	get_darkestsecret(void) const;

};



#endif