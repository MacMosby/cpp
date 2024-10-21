/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:17:25 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/16 13:17:27 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int i = 0;

	Zombie *horde = zombieHorde(5, "Dan");
	while (i < 5)
	{
		horde[i].announce();
		i++;
	}
	i = 0;
	delete [] horde;
}
