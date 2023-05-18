/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:46:09 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/18 15:46:12 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);	
}

int	main(int argc, char *argv[])
{
	std::string tempo_s;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			tempo_s = argv[i];
			for (int j = 0; j < tempo_s.length(); ++j)
				std::cout << ft_toupper(tempo_s.at(j));
		}
		std::cout << std::endl;
	}
	return (0);
}
