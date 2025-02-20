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
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	dan("Dan", 42);
	Bureaucrat	kars("Kars", 1);
	Bureaucrat	intern("Intern", 150);

	ShrubberyCreationForm	tarSCF("home");
	RobotomyRequestForm		tarRRF("R2D2");
	PresidentialPardonForm	tarPPF("Marc");

	//AForm test;

	intern.signForm(tarSCF);
	dan.signForm(tarRRF);
	kars.executeForm(tarSCF);
	kars.executeForm(tarRRF);
	kars.signForm(tarPPF);
	dan.executeForm(tarPPF);
	kars.executeForm(tarPPF);

	return 0;
}
