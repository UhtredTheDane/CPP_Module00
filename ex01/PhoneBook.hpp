#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
    public:
        void add_contact();
        void search_contact() const;

    private:
        Contact contacts[8];
        unsigned int    nb_contact(0);
        std::string PhoneBook::seek_first_name() const;
        std::string PhoneBook::seek_last_name() const;
        std::string PhoneBook::seek_darkest_secret() const;
        std::string PhoneBook::seek_phone_number() const;
};
#endif