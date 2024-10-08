/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:29:59 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/07 10:30:01 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook Constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor called" << std::endl;
}

void	PhoneBook::add(void)
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	num;
	std::string	secret;

	std::cout << "Please enter your information." << std::endl;
	std::cout << "First name: " << std::endl;
	std::cin >> first;
	std::cout << "Last name: " << std::endl;
	std::cin >> last;
	std::cout << "Nickname: " << std::endl;
	std::cin >> nick;
	std::cout << "Phone number: " << std::endl;
	std::cin >> num;
	std::cout << "Darkest secret: " << std::endl;
	std::cin >> secret;

	Contact entry(first, last, nick, num, secret);
}

void	PhoneBook::search(void) const
{
	std::cout << "search contact" << std::endl;
}

int		PhoneBook::compare(Contact *other) const
{
	
}
