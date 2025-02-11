/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:00:31 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/07 17:00:33 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal
{

	public:

		Animal();
		Animal(Animal const &ref);
		virtual ~Animal();

		Animal			&operator=(Animal const &ref);

		virtual void	makeSound() const;
		std::string		getType() const;

	protected:

		std::string		_type;
};

#endif
