/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:31:13 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/27 13:52:05 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
: first_name_(""), last_name_(""), nickname_(""), phone_number_(""), darkest_secret_("")
{
}

Contact::Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret)
: first_name_(first), last_name_(last), nickname_(nick), phone_number_(num), darkest_secret_(secret)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::get_first_name(void) const
{
	return (this->first_name_);
}

std::string	Contact::get_last_name(void) const
{
	return (this->last_name_);
}

std::string	Contact::get_nickname(void) const
{
	return (this->nickname_);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->phone_number_);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret_);
}
