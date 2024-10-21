/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:17:25 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/16 13:17:27 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of string variable: " << &str << std::endl;
	std::cout << "Memory address help by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address help by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of the string variable: " << str << std::endl;
	std::cout << "Value of pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of pointed to by stringREF: " << stringREF << std::endl;
}
