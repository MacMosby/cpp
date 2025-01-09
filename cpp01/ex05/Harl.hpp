/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:55:23 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/09 15:55:24 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

class Harl
{
	public:

		void	complain(std::string level) const;

	private:

		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};

#endif
