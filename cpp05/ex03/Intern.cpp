/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:57:56 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/20 11:57:57 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &ref)
{
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(Intern const &ref)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	return *this;
}

AForm	*Intern::makeForm(std::string formName, std::string formTarget)
{
	int	i = 0;
	AForm	*form;
	std::string	forms[] =
	{
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};

	while (i < 3)
	{
		if (forms[i] == formName)
			break;
		i++;
	}

	switch (i)
	{
		case 0:
		std::cout << "Intern creates ShrubberyCreationForm with target " << formTarget << std::endl;
		return new	ShrubberyCreationForm(formTarget);

		case 1:
		std::cout << "Intern creates RobotomyRequestForm with target " << formTarget << std::endl;
		return new RobotomyRequestForm(formTarget);

		case 2:
		std::cout << "Intern creates PresidentialPardonForm with target " << formTarget << std::endl;
		return new PresidentialPardonForm(formTarget);

		case 3:
		{
			std::cerr << "Passed form name doesn't exist. No form created." << std::endl;
			return ;
		}
	}
}
