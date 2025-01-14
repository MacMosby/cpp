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
	if (argc != 4)
		return (1);

	std::string infile = argv[1];
	std::string outfile = infile + ".replace";
	std::string	s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;
	std::string content;
	size_t index = 0;

	std::ifstream inFileStream;
	inFileStream.open(infile.c_str());
	if (inFileStream.fail())
	{
		std::cout << "Error opening infile." << std::endl;
		return (1);
	}
	while (getline(inFileStream, line))
	{
		content.append(line);
		content.append("\n");
	}
	inFileStream.close();

	// content manipulation
	if (s1.compare(s2))
	{
		while (true)
		{
			index = content.find(s1, index);
			if (index == std::string::npos)
				break;
			content.erase(index, s1.size());
			content.insert(index, s2);
			index += s2.size();
		}
	}

	// open new file
	std::ofstream outFileStream;
	outFileStream.open(outfile.c_str());
	if (outFileStream.fail())
	{
		std::cout << "Error opening outfile." << std::endl;
		return (1);
	}
	outFileStream << content;
	// close new file
	outFileStream.close();

	return (0);
}
