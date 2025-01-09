/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:55:44 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/09 15:55:45 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) const
{
	std::cout << "DEBUG level: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) const
{
	std::cout << "INFO level: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << "WARNING level: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std:: endl;
}

void	Harl::error(void) const
{
	std::cout << "ERROR level: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) const
{
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void	(Harl::*functions[4])(void) const;
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;

	int	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;
		}
		i++;
	}
	std::cout << "No correct Harl input." << std::endl;
}
