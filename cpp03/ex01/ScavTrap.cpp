/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:28:14 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/06 14:28:15 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &ref) : ClapTrap(ref._name)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_hit_points = ref._hit_points;
	this->_energy_points = ref._energy_points;
	this->_attack_damage = ref._attack_damage;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &ref)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->_name = ref._name;
	this->_hit_points = ref._hit_points;
	this->_energy_points = ref._energy_points;
	this->_attack_damage = ref._attack_damage;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name
			  << " is now in Gate keer mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		this->_energy_points--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		std::cout << "It has " << this->_energy_points << " energy points left" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " is missing hit or energy points";
		std::cout << " and can't attack." << std::endl;
	}
}
