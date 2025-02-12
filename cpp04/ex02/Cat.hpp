/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:03:49 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/07 17:03:51 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat(Cat const &ref);
		~Cat();

		Cat	&operator=(Cat const &ref);

		void	makeSound() const;
		Brain	&getBrain() const;

	private:

		Brain	*brain;

};

#endif

