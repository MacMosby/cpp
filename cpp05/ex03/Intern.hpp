/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:58:00 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/20 11:58:01 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <string>
# include <iostream>
# include "AForm.hpp"

class Intern
{

	public:

		Intern();
		Intern(Intern const &ref);
		~Intern();

		Intern	&operator=(Intern const &ref);

		AForm	*makeForm(std::string formName, std::string formTarget);
};

#endif
