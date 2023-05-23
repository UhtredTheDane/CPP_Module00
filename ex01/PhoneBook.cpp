/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:40:53 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/23 12:39:44 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : nb_contact(0)
{

}

std::string PhoneBook::seek_first_name()
{
	std::string  first_name;

    do
    {
	    std::cout << "First Name: ";
        getline(std::cin, first_name);
    } while(first_name.length() <= 0);
    return (first_name);
}

std::string PhoneBook::seek_last_name()
{
	std::string  last_name;

    do
    {
	    std::cout << "Last Name: ";
        getline(std::cin, last_name);
    } while(last_name.length() <= 0);
    return (last_name);
}

std::string PhoneBook::seek_nickname()
{	
	std::string  nickname;
	
	do
	{
		std::cout << "Nickname: ";
		getline(std::cin, nickname);
	} while(nickname.length() <= 0);
	return (nickname);
}

std::string PhoneBook::seek_darkest_secret()
{
	std::string  darkest_secret;

    do
    {
	    std::cout << "Darkest Secret: ";
        getline(std::cin, darkest_secret);
    } while(darkest_secret.length() <= 0);
    return (darkest_secret);
}

unsigned int PhoneBook::seek_phone_number()
{
    unsigned int     phone_number;

    std::cout << "Phone Number: ";
    std::cin >> phone_number;
    std::cin.ignore();
    return (phone_number);
}

void PhoneBook::add_contact()
{
	if (nb_contact < 8)
		++nb_contact;
	contacts[nb_contact - 1].set_first_name(seek_first_name());
	contacts[nb_contact - 1].set_last_name(seek_last_name());
	contacts[nb_contact - 1].set_nickname(seek_nickname());
	contacts[nb_contact - 1].set_darkest_secret(seek_darkest_secret());
	contacts[nb_contact - 1].set_phone_number(seek_phone_number());
}

void PhoneBook::search_contact()
{
	unsigned int index;

	//afficher tout les contacts selon formattage
	std::cout << "Enter index: ";
	std::cin >> index;
	std::cin.ignore();
	if (index < 8)
	{
		if (index < nb_contact)
			contacts[index].show_infos(index);	
		else
			std::cout << "Empty contact." << std::endl;
	}
	else
		std::cout << "Bad index." << std::endl; 
}	
