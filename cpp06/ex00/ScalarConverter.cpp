/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:46:35 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/21 19:46:37 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <typeinfo>

ScalarConverter::ScalarConverter()
{
	std::cout << "SC default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &ref)
{
	(void)ref;
	std::cout << "SC copy constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "SC destructor called" << std::endl;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &ref)
{
	(void)ref;
	std::cout << "SC copy assignment operator called" << std::endl;
	return *this;
}

void		ScalarConverter::convert(std::string s)
{
	char	c;
	int		i;
	float	f;
	double	d;

	bool	isChar = false;
	bool	isInt = false;
	bool	isFloat = false;
	bool	isDouble = false;

	if (s.length() == 3 && !(s.compare(0, 1, "\'")) && !(s.compare(2, 1, "\'")))
		isChar = true;
	if (s.find_first_not_of("0123456789-") == std::string::npos)
		isInt = true;
	if (s.find_first_of('f') == s.length() - 1)
		isFloat = true;
	if (s.find_first_not_of("0123456789-.") && !isInt)
		isDouble = true;

	if (isChar)
	{
		c = s[1];
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
	}
	else if (isInt)
	{
		i = atoi(s.c_str());
		c = static_cast<char>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	}
	else if (isFloat)
	{
		f = strtof(s.c_str(), NULL);
		i = static_cast<int>(f);
		c = static_cast<char>(i);
		d = static_cast<double>(f);
	}
	else if (isDouble)
	{
		d = strtod(s.c_str(), NULL);
		i = static_cast<int>(d);
		c = static_cast<char>(i);
		f = static_cast<float>(d);
	}

	std::cout << std::endl << "Input: " << s << std::endl;

	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d << std::endl;
}
