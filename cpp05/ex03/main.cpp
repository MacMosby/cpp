/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:43:15 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/14 19:43:17 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Intern	intern;
	AForm	*scf;
	AForm	*rrf;
	AForm	*ppf;

	scf = intern.makeForm("XXX", "random");
	scf = intern.makeForm("ShrubberyCreationForm", "home");
	rrf = intern.makeForm("RobotomyRequestForm", "R2D2");
	ppf = intern.makeForm("PresidentialPardonForm", "Marc");

	delete scf;
	delete rrf;
	delete ppf;

	return 0;
}
