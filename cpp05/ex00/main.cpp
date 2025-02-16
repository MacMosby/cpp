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

int main()
{
	Bureaucrat a;
	Bureaucrat b(a);
	Bureaucrat c("Joe", 42);
	Bureaucrat d("Homer");
	Bureaucrat e("Einstein", 1);
	//Bureaucrat f("Nobody", 151);
	//Bureaucrat g("Brain", 0);

	std::cout << d.getName() << "'s grade is: " << d.getGrade() << std::endl;
	try
	{
		d.decrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << e.getName() << "'s grade is: " << e.getGrade() << std::endl;
	try
	{
		e.incrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}



	return 0;
}
