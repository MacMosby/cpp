/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:31:13 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/07 10:31:15 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	std::cout << "Contact Default Constructor called" << std::endl;
}

Contact::Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret)
: first_name(first), last_name(last), nickname(nick), phone_number(num), darkest_secret(secret)
{
	std::cout << "Actual Contact Constructor called" << std::endl;
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "num: " << this->phone_number << std::endl;
	std::cout << "secret: " << this->darkest_secret << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "HELLO " << this->first_name << std::endl;
	std::cout << "Contact Destructor called" << std::endl;
}
