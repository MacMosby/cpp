/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:17:47 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/16 13:17:49 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Default constructor called." << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Constructor with name is called. Zombie " << this->name << " is born." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " is dead." << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
