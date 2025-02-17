/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:43:31 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/14 19:43:33 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include "AForm.hpp"
# include <string>
# include <iostream>

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &ref);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &ref);

		std::string const	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(AForm &form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:

		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &input);

#endif
