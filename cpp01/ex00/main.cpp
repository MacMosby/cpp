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

int	main()
{
	Zombie	zombie = Zombie("Marc");
	zombie.announce();
	Zombie *new_zombie = newZombie("Kars");
	new_zombie->announce();
	delete new_zombie;
	randomChump("Magda");
}
