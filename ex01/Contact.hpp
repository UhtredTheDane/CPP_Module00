/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:26:10 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/26 15:02:02 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
	public:

		Contact(void);
		void		show_infos(int index) const;
		std::string	get_first_name() const;
		void		set_first_name(std::string first_name);
		std::string	get_last_name() const;
		void		set_last_name(std::string last_name);
		std::string	get_nickname() const;
		void		set_nickname(std::string nickname);
		std::string	get_darkest_secret() const;
		void		set_darkest_secret(std::string darkest_secret);
		std::string	get_phone_number() const;
		void		set_phone_number(std::string phone_number);

	private:

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone_number;
};
#endif
