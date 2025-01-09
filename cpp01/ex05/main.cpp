/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:54:58 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/09 15:55:00 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;

	std::cout << "\nTest for DEGUB level:" << std::endl;
	harl.complain("DEBUG");
	std::cout << "\nTest for INFO level:" << std::endl;
	harl.complain("INFO");
	std::cout << "\nTest for WARNING level:" << std::endl;
	harl.complain("WARNING");
	std::cout << "\nTest for ERROR level:" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
}
