/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:00:36 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/07 17:00:38 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &ref)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = ref._type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &ref)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->_type = ref._type;
	this->brain = ref.brain;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal makes generic sound." << std::endl;
}

std::string	Animal::getType() const
{
	return this->_type;
}

Brain	&Animal::getBrain() const
{
	return *(this->brain);
}
