#include "Contact.hpp"

Contact::Contact()
{

}

void Contact::show_contact()
{
    
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}

void Contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

void Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

std::string Contact::get_darkest_secret()
{
	return (this->darkest_secret); 
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

unsigned int Contact::get_phone_number()
{
	return (this->phone_number);
}

void Contact::set_phone_number(unsigned int phone_number)
{
    this->phone_number = phone_number;
    
}
