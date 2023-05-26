/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:26:08 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/26 14:58:20 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

class PhoneBook
{
	public:

		PhoneBook(void);
		void	add_contact(void);
		void	search_contact(void);

	private:

		Contact		contacts[8];
		unsigned int	nb_contact;
		void		show_format_contacts(void);
};

std::string seek_first_name(void);
std::string seek_last_name(void);
std::string seek_darkest_secret(void);
std::string seek_nickname(void);
std::string seek_phone_number(void);

#endif
