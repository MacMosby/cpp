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

int main()
{
	Bureaucrat a("Nobody", 151);

	AForm f("TaxForm", 149, 149);
	std::cout << f << std::endl;
	AForm g(f);
	std::cout << g << std::endl;
	AForm h("Sign Up Form");
	std::cout << h << std::endl;

	std::cout << a;
	a.signForm(f);
	a.incrementGrade();
	a.signForm(f);
	std::cout << a;

	return 0;
}
