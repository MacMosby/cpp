/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:46:42 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/07 18:46:44 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const &ref);
		virtual ~WrongAnimal();

		WrongAnimal			&operator=(WrongAnimal const &ref);

		virtual void	makeSound() const;
		std::string		getType() const;

	protected:

		std::string		_type;
};

#endif
