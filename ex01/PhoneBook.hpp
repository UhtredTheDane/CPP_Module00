/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:26:08 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/23 11:48:16 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
    public:

	PhoneBook();
        void add_contact();
        void search_contact();

    private:

        Contact contacts[8];
        unsigned int    nb_contact;
	std::string seek_first_name();
	std::string seek_last_name();
	std::string seek_darkest_secret();
	std::string seek_nickname();
	unsigned int seek_phone_number();
};

#endif
