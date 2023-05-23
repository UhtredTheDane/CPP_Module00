/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:26:10 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/23 11:53:45 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
    public:
        
	Contact();
	void show_infos(int index);
        void show_columns();
	std::string get_first_name();
        void set_first_name(std::string first_name);
        std::string get_last_name();
        void set_last_name(std::string last_name);
	std::string get_nickname();
	void set_nickname(std::string nickname);
        std::string get_darkest_secret();
        void set_darkest_secret(std::string darkest_secret);
        unsigned int get_phone_number();
        void set_phone_number(unsigned int phone_number);

    private:
        
	std::string  first_name;
        std::string  last_name;
	std::string  nickname;
        std::string  darkest_secret;
        unsigned int    phone_number;
        
};
#endif
