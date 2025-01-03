/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:48:12 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/01/03 11:48:14 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "memory address of string variable (&string): " << &string << std::endl;
	std::cout << "memory address held by stringPTR (stringPTR): " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF (&stringREF): " << &stringREF << std::endl;

	std::cout << "value of string variable (string): " << string << std::endl;
	std::cout << "value pointed to by stringPTR (*stringPTR): " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF (stringREF): " << stringREF << std::endl;

	return (0);
}
