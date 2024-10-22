/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:48:27 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/21 16:48:28 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	public:

		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		std::string const &getType();
		void setType(std::string type);

	private:

		std::string	type;
};

#endif
