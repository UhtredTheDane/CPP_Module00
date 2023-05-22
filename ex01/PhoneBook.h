#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook
{
    public:
        void add_contact();
        void search_contact();

    private:
        Contact contacts[8];
};
#endif