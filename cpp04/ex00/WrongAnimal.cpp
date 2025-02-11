/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:46:47 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/07 18:46:48 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &ref)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->_type = ref._type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &ref)
{
	this->_type = ref._type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes generic sound." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->_type;
}
