/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:29:59 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/22 00:34:15 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::replace_oldest_entry(Contact new_entry)
{
	int	i = 0;

	while (i < 7)
	{
		this->contacts[i] = this->contacts[i + 1];
		i++;
	}
	this->contacts[i] = new_entry;
}

void	PhoneBook::place_in_phonebook(Contact entry)
{
	int	i = 0;

	while (i < 8)
	{
		if (this->contacts[i].get_first_name() == "")
		{
			this->contacts[i] = entry;
			break ;
		}
		i++;
	}
	if (i == 8)
		this->replace_oldest_entry(entry);
}

void	PhoneBook::add(void)
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	num;
	std::string	secret;

	std::cout << "Please enter your information." << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, first);
	if (std::cin.eof())
		return;
	while (first == "")
	{
		std::cout << "Invalid input, please try again: ";
		std::getline(std::cin, first);
		if (std::cin.eof())
			return;
	}
	std::cout << "Last name: ";
	std::getline(std::cin, last);
	if (std::cin.eof())
		return;
	while (last == "")
	{
		std::cout << "Invalid input, please try again: ";
		std::getline(std::cin, last);
		if (std::cin.eof())
			return;
	}
	std::cout << "Nickname: ";
	std::getline(std::cin, nick);
	if (std::cin.eof())
		return;
	while (nick == "")
	{
		std::cout << "Invalid input, please try again: ";
		std::getline(std::cin, nick);
		if (std::cin.eof())
			return;
	}
	std::cout << "Phone number: ";
	std::getline(std::cin, num);
	if (std::cin.eof())
		return;
	while (num == "")
	{
		std::cout << "Invalid input, please try again: ";
		std::getline(std::cin, num);
		if (std::cin.eof())
			return;
	}
	std::cout << "Darkest secret: ";
	std::getline(std::cin, secret);
	if (std::cin.eof())
		return;
	while (secret == "")
	{
		std::cout << "Invalid input, please try again: ";
		std::getline(std::cin, secret);
		if (std::cin.eof())
			return;
	}

	Contact entry(first, last, nick, num, secret);
	this->place_in_phonebook(entry);
}

void	PhoneBook::display_contact_detail(std::string contact_detail) const
{
	int	i = 0;
	int	size = contact_detail.size();

	if (size > 10)
	{
		while (i < 9)
		{
			std::cout << contact_detail[i];
			i++;
		}
		std::cout << ".";
	}
	else
	{
		i = 10 - size;
		while (i > 0)
		{
			std::cout << " ";
			i--;
		}
		std::cout << contact_detail;
	}
}

void	PhoneBook::display_contact(int index) const
{
	std::cout << std::endl;
	std::cout << "First name: " << this->contacts[index].get_first_name() << std::endl;
	std::cout << "Last name: " << this->contacts[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << this->contacts[index].get_nickname() << std::endl;
	std::cout << "Phone number: " << this->contacts[index].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[index].get_darkest_secret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::display_contact_line(Contact entry, int index) const
{
	std::cout << "         " << index << "|";
	display_contact_detail(entry.get_first_name());
	std::cout << "|";
	display_contact_detail(entry.get_last_name());
	std::cout << "|";
	display_contact_detail(entry.get_nickname());
	std::cout << std::endl;
}

void	PhoneBook::display_all_entries(void) const
{
	int	i = 0;

	std::cout << std::endl;
	display_contact_detail("index");
	std::cout << "|";
	display_contact_detail("first name");
	std::cout << "|";
	display_contact_detail("last name");
	std::cout << "|";
	display_contact_detail("nickname");
	std::cout << std::endl;

	while (i < 8)
	{
		if (this->contacts[i].get_first_name() != "")
			display_contact_line(this->contacts[i], i + 1);
		i++;
	}
	std::cout << std::endl;
}

void	PhoneBook::search(void) const
{
	int			index = 0;

	if (this->contacts[0].get_first_name() == "")
	{
		std::cout << "Phonebook empty - No entries available." << std::endl;
		return ;
	}
	this->display_all_entries();
	std::cout << "Who do you want to call? Choose index: ";
	if (std::cin >> index)
		std::cout << "You entered " << index << std::endl;
	else
		std::cin.clear();
	std::cin.ignore(1000, '\n');
	if (std::cin.eof())
		return;
	while (index < 1 || index > 8 || this->contacts[index - 1].get_first_name() == "")
	{
		std::cout << "Invalid input, please try again." << std::endl;
		if (std::cin >> index)
			std::cout << "You entered " << index << std::endl;
		else
			std::cin.clear();
		std::cin.ignore(1000, '\n');
		if (std::cin.eof())
			return;
	}
	this->display_contact(index - 1);
}
