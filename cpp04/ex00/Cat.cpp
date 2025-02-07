/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:03:45 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/07 17:03:46 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &ref)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = ref._type;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &ref)
{
	std::cout << "Cat copy assignment operator constructor called" << std::endl;
	this->_type = ref._type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meeeoooooooow!" << std::endl;
}
