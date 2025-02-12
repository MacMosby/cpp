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

Dog::Dog() : AAnimal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(Dog const &ref)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = ref._type;
	this->brain = new Brain(*ref.brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(Dog const &ref)
{
	std::cout << "Dog copy assignment operator constructor called" << std::endl;
	this->_type = ref._type;
	delete this->brain;
	this->brain = new Brain(*ref.brain);
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Ruff, ruff!" << std::endl;
}
