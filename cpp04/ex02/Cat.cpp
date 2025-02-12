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

Cat::Cat() : AAnimal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(Cat const &ref)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = ref._type;
	this->brain = new Brain(*ref.brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=(Cat const &ref)
{
	std::cout << "Cat copy assignment operator constructor called" << std::endl;
	this->_type = ref._type;
	delete this->brain;
	this->brain = new Brain(*(ref.brain));
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meeeoooooooow!" << std::endl;
}

Brain	&Cat::getBrain() const
{
	return *(this->brain);
}
