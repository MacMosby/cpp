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
: first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("")
{
}

Contact::Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret)
: first_name(first), last_name(last), nickname(nick), phone_number(num), darkest_secret(secret)
{
}

Contact::~Contact(void)
{
}
