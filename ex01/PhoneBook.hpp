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
	unsigned int seek_phone_number();
};

#endif
