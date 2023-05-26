/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:46:13 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/26 15:06:54 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{

}

void Contact::show_infos(int index) const
{
	std::cout << "Index: " << index << std::endl;
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;	
}

std::string Contact::get_first_name() const
{
	return (this->first_name);
}

void Contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}

std::string Contact::get_last_name() const
{
	return (this->last_name);
}

void Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

std::string Contact::get_nickname() const
{
	return (this->nickname);
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string Contact::get_darkest_secret() const
{
	return (this->darkest_secret); 
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

std::string Contact::get_phone_number() const
{
	return (this->phone_number);
}

void Contact::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
    
}
