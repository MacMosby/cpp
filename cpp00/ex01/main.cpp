/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:19:04 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/22 00:30:30 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main()
{
	PhoneBook	phoneBook;
	std::string	input;

	while (1)
	{
		std::cout << std::endl;
		std::cout << "Please type ADD if you want to add a contact." << std::endl;
		std::cout << "Please type SEARCH if you want to search for a contact." << std::endl;
		std::cout << "Please type EXIT to exit the phone book." << std::endl;
		std::cout << std::endl;
		//std::cout << input << std:: endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (input.compare("ADD") == 0)
		{
			phoneBook.add();
			if (std::cin.eof())
				break;
		}
		else if (input.compare("SEARCH") == 0)
		{
			phoneBook.search();
			if (std::cin.eof())
				break;
		}
		else if (input.compare("EXIT") == 0)
		{
			break;
		}
		else
		{
			std::cout << "Bad input, please try again." << std::endl;
		}
	}
	return (0);
}
