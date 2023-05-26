/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:40:53 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/26 14:59:25 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : nb_contact(0)
{

}

std::string seek_first_name()
{
	std::string  first_name;

	do
	{
		std::cout << "First Name: ";
		getline(std::cin, first_name);
		if (!std::cin)
			std::exit(1);
	} while(first_name.length() <= 0);
	return (first_name);
}

std::string seek_last_name()
{
	std::string  last_name;

	do
	{
		std::cout << "Last Name: ";
		getline(std::cin, last_name);
		if (!std::cin)
			std::exit(1);
	} while(last_name.length() <= 0);
	return (last_name);
}

std::string seek_nickname()
{	
	std::string  nickname;

	do
	{
		std::cout << "Nickname: ";
		getline(std::cin, nickname);
		if (!std::cin)
			std::exit(1);
	} while(nickname.length() <= 0);
	return (nickname);
}

std::string seek_darkest_secret()
{
	std::string  darkest_secret;

	do
	{
		std::cout << "Darkest Secret: ";
		getline(std::cin, darkest_secret);
		if (!std::cin)
			std::exit(1);
	} while(darkest_secret.length() <= 0);
	return (darkest_secret);
}

std::string seek_phone_number()
{
	std::string     phone_number;

	do
	{
		std::cout << "Phone Number: ";
		getline(std::cin, phone_number);
		if (!std::cin)
			std::exit(1);
	} while (phone_number.length() <= 0);
	return (phone_number);
}

void PhoneBook::add_contact()
{
	if (nb_contact < 8)
		++nb_contact;
	contacts[nb_contact - 1].set_first_name(seek_first_name());
	contacts[nb_contact - 1].set_last_name(seek_last_name());
	contacts[nb_contact - 1].set_nickname(seek_nickname());
	contacts[nb_contact - 1].set_phone_number(seek_phone_number());
	contacts[nb_contact - 1].set_darkest_secret(seek_darkest_secret());
}

void show_format_string(std::string string_to_format)
{
	int	length;

	length = string_to_format.length();
	if (length > 10)
	{
		for (int j = 0; j < 9; ++j)
			std::cout << string_to_format[j];
		std::cout << ".";
	}
	else
	{
		for (int j = 0; j < 10 - length; ++j)
			std::cout << " ";
		std::cout << string_to_format;	
	}
	std::cout << "|";
}

void	PhoneBook::show_format_contacts(void)
{
	for (unsigned int i = 0; i < nb_contact; ++i)
	{
		std::cout << "\t " << i << "|";
		show_format_string(contacts[i].get_first_name());
		show_format_string(contacts[i].get_last_name());
		show_format_string(contacts[i].get_nickname());
		show_format_string(contacts[i].get_phone_number());
		show_format_string(contacts[i].get_darkest_secret());
		std::cout << std::endl;
	}
}

void PhoneBook::search_contact()
{
	unsigned int index;

	show_format_contacts();
	std::cout << "Enter index: ";
	std::cin >> index;
	std::cin.ignore();
	if (!std::cin)
		std::exit(1);
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
