/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:05:54 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/03 12:05:56 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const	&Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(void)
{
	std::cout << "Random Weapon created." << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon " << this->_type << " created." << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << this->_type << " destroyed." << std::endl;
}
