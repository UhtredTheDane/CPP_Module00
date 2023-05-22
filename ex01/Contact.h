#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
    public:
        Contact() = delete;
        Contact(string first_name, string last_name, string darkest_secret, unsigned int phone_number);
        show_contact() const;

    private:
        string  first_name;
        string  last_name;*
        string  darkest_secret;
        unsigned int    phone_number;
        
};
#endif