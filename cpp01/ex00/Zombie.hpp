/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:17:42 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/16 13:17:44 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
	public:

		Zombie(std::string name);
		~Zombie(void);

		void	announce( void );

	private:

		std::string	name;
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
