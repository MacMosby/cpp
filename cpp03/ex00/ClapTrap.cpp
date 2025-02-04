/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:37:49 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/03 20:37:51 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
_name(""),
_hit_points(10),
_energy_points(10),
_attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
_name(name),
_hit_points(10),
_energy_points(10),
_attack_damage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called for ClapTrap " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = ref._name;
	this->_hit_points = ref._hit_points;
	this->_energy_points = ref._energy_points;
	this->_attack_damage = ref._attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		std::cout << "It has " << this->_energy_points << " energy points left" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is missing hit or energy points";
		std::cout << " and can't attack." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < amount)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
	std::cout << "ClapTrap " << this->_name << " is damaged and has ";
	std::cout << this->_hit_points << " hit points left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "ClapTrap " << this->_name << " repairs itself and regains ";
		std::cout << amount << " hit points to have now: " << this->_hit_points << std::endl;
		std::cout << "It has " << this->_energy_points << " energy points left" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is missing hit or energy points";
		std::cout << " and can't repair itself." << std::endl;
	}
}

std::string	ClapTrap::getName(void)
{
	return this->_name;
}
