/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:46:14 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/03 10:46:16 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombie = Zombie("Marc");
	zombie.announce();

	Zombie *kars = newZombie("Kars");
	kars->announce();

	randomChump("Magda");

	delete kars;
	return (0);
}
