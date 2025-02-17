/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:53:04 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/17 15:53:05 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <string>
# include <iostream>

class Bureaucrat;

class AForm
{
	public:

		AForm();
		AForm(std::string name);
		AForm(std::string name, int grade_to_sign, int grade_to_execute);
		AForm(AForm const &ref);
		~AForm();

		AForm				&operator=(AForm const &ref);

		std::string const	getName() const;
		bool				getSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		void				beSigned(Bureaucrat &ref);

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
		bool				_signed;
		int	const			_grade_to_sign;
		int const			_grade_to_execute;

};

std::ostream	&operator<<(std::ostream &out, AForm const &input);

#endif
