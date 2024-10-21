/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:33:11 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/21 13:33:12 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	int		i = 0;
	Zombie	*zombieHorde = new Zombie[N];

	while (i < N)
	{
		Zombie	newZombie = Zombie(name);
		zombieHorde[i] = newZombie;
		i++;
	}
	return (zombieHorde);
}
