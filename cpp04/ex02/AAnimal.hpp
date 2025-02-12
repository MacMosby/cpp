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

#ifndef AANIMAL_H
# define AANIMAL_H

# include <string>
# include <iostream>
# include "Brain.hpp"

class AAnimal
{

	public:

		AAnimal();
		AAnimal(AAnimal const &ref);
		virtual ~AAnimal();

		virtual AAnimal	&operator=(AAnimal const &ref);

		virtual void	makeSound() const = 0;
		std::string		getType() const;
		virtual Brain	&getBrain() const;

	protected:

		std::string		_type;
		Brain			*brain;

};

#endif
