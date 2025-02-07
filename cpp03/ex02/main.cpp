/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:38:00 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/03 20:38:02 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	int	i;
	ScavTrap a("Ernie");
	ScavTrap b("Bert");
	ScavTrap c(a);

	a.attack(b.getName());
	c.attack(b.getName());
	b.attack("Someone random");

	i = 0;
	while (i < 4)
	{
		c.beRepaired(2);
		i++;
	}

	i = 0;
	while (i < 11)
	{
		c.takeDamage(11);
		i++;
	}
	c.beRepaired(2);
	c.attack(b.getName());

	return 0;
}
