/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:04:16 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/23 12:40:32 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string user_answer;
	PhoneBook ph;
	
	do
	{
		std::cout << "$>";
		getline(std::cin, user_answer);
		if (!std::cin)
			std::exit(1);
		if (user_answer == "ADD")
			ph.add_contact();
		else if(user_answer == "SEARCH")
			ph.search_contact();
		else if (user_answer != "EXIT")
			std::cout << "Bad command." << std::endl;
	} while (user_answer != "EXIT");
	return (0);
}
