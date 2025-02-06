/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:37:54 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/03 20:37:55 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class ClapTrap
{

	public:

		ClapTrap(void); // default constructor
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &ref); // copy constructor
		~ClapTrap(void); // destructor

		ClapTrap &operator=(ClapTrap const &ref); // copy assignment operator

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string	getName(void);

	protected:

		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

};

#endif
