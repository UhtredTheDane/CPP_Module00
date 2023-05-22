#include "PhoneBook.hpp"

string PhoneBook::seek_first_name()
{
    string  first_name;

    do
    {
        cout << "First Name: ";
        getline(cin, first_name);
        cout << endl;
    } while(first_name.length() <= 0);
    return (first_name);
}

string PhoneBook::seek_last_name()
{
    string  last_name;

    do
    {
        cout << endl << "Last Name: ";
        getline(cin, last_name);
        cout << endl;
    } while(last_name.length() <= 0);
    return (last_name);
}

string PhoneBook::seek_darkest_secret()
{
    string  darkest_secret;

    do
    {
        cout << endl << "Darkest Secret: ";
        getline(cin, darkest_secret);
        cout << endl;
    } while(darkest_secret.length() <= 0);
    return (darkest_secret);
}

string PhoneBook::seek_phone_number()
{
    int     phone_number;

    cout << endl << "Phone Number: ";
    cin >> phone_number;
    cin.ignore();
    cout << endl;
    return (phone_number);
}

void PhoneBook::add_contact()
{
    if (nb_contact < 8)
        ++nb_contact;
    contacts[nb_contact - 1].set_first_name(seek_first_name());
    contacts[nb_contact - 1].set_last_name(seek_last_name());
    contacts[nb_contact - 1].set_darkest_secret(seek_darkest_secret());
    contacts[nb_contact - 1].set_phone_number(seek_phone_number());
}


void search_contact() const
{

}
