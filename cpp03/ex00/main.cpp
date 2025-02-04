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

#include "ClapTrap.hpp"

int	main()
{
	int	i;
	ClapTrap a("Ernie");
	ClapTrap b("Bert");
	ClapTrap c(a);

	a.attack(b.getName());
	b.attack("Someone random");

	i = 0;
	while (i < 9)
	{
		c.beRepaired(10);
		i++;
	}

	i = 0;
	while (i < 10)
	{
		c.takeDamage(11);
		i++;
	}
	c.beRepaired(2);
	c.attack(b.getName());

	return 0;
}
