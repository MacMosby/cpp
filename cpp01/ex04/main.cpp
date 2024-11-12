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
#include <fstream>

int main(int argc, char **argv)
{
	std::string filename;
	std::string new_filename;
	std::string s1;
	std::string s2;
	std::string content;

	if (argc != 4)
		return (0);
	filename = argv[1];
	new_filename = filename.append(".replace");
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cerr << "Failed to open the file " << filename << "." << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(infile, line))
	{
		content.append(line);
	}
	infile.close();

	std::cout << content << std::endl;

	/* std::ofstream outfile(new_filename);
	if (!outfile)
	{
		std::cerr << "Failed to open the file " << new_filename << "." << std::endl;
		return (1);
	}
	outfile << content;
	outfile.close(); */
	return (0);
}
