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

#include "AAnimal.hpp"
#include "Brain.hpp"

AAnimal::AAnimal() : _type("")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &ref)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	this->_type = ref._type;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &ref)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	this->_type = ref._type;
	this->brain = ref.brain;
	return *this;
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal makes generic sound." << std::endl;
}

std::string	AAnimal::getType() const
{
	return this->_type;
}

Brain	&AAnimal::getBrain() const
{
	return *(this->brain);
}
