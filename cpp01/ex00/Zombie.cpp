/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:45:54 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/03 10:45:56 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Random Zombie created." << std:: endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie " << this->_name << " created." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " destroyed." << std::endl;
}


