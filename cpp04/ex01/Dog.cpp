/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:03:39 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/07 17:03:40 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &ref)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = ref._type;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &ref)
{
	std::cout << "Dog copy assignment operator constructor called" << std::endl;
	this->_type = ref._type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Ruff, ruff!" << std::endl;
}
