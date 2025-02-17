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
	Bureaucrat f("Nobody", 151);
	Bureaucrat g("Brain", 0);

	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d;
	std::cout << e;
	std::cout << f;
	std::cout << g;


	std::cout << d;
	try
	{
		d.decrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException &exc)
	{
		std::cerr << exc.what() << '\n';
	}

	std::cout << d;
	try
	{
		d.incrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException &exc)
	{
		std::cerr << exc.what() << '\n';
	}
	std::cout << d;




	std::cout << e;
	try
	{
		e.incrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException &exc)
	{
		std::cerr << exc.what() << '\n';
	}

	std::cout << e;
	try
	{
		e.decrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException &exc)
	{
		std::cerr << exc.what() << '\n';
	}
	std::cout << e.getName() << "'s grade is: " << e.getGrade() << std::endl;


	return 0;
}
