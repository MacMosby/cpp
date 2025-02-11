/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:46:29 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/07 18:46:31 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &ref)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = ref._type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &ref)
{
	std::cout << "WrongCat copy assignment operator constructor called" << std::endl;
	this->_type = ref._type;
	return *this;
}

/* void	WrongCat::makeSound() const
{
	std::cout << "WrongMeeeoooooooow!" << std::endl;
} */
