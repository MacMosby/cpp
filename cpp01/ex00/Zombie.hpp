/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:46:40 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/03 10:46:41 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void		announce(void) const;

	private:

		std::string	_name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
