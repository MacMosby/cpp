/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:43:42 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/11 15:43:43 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

class Brain
{

	public:

		Brain();
		Brain(Brain const &ref);
		~Brain();

		Brain &operator=(Brain const &ref);
		void setIdea(int i, std::string idea);
		std::string	getIdea(int i) const;

	private:
		std::string	ideas[100];

};

#endif
