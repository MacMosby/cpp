/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:24:06 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/03 11:24:09 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int n = 7;
	std::string name = "Dan";
	Zombie *horde = zombieHorde(n, name);
	int i = 0;
	while (i < n)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
