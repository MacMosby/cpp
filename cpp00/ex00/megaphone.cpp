/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:18:25 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/10/04 16:18:27 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Namespaces, classes, member functions, stdio streams,
initialization lists, static, const, and some other basic
stuf */

#include <iostream>

void	scream(char *str)
{
	int	i = 0;
	char c;

	while (str[i])
	{
		c = toupper(str[i]);
		std::cout << c;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[i])
	{
		scream(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
