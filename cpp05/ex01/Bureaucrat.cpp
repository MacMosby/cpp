/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:43:35 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/14 19:43:37 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150)
{
	std::cout << "Bureaucrat name constructor called" << std::endl;
}


Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		this->_grade = grade;
		if (this->_grade < 1)
			throw GradeTooHighException();
		else if (this->_grade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "Grade is set do default value 150." << std::endl;
		this->_grade = 150;
	}
	std::cout << "Bureaucrat data constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref) : _name(ref._name)
{
	this->_grade = ref._grade;
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &ref)
{
	this->_grade = ref._grade;
	return *this;
}

std::string const	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException &exc)
	{
		std::cout << this->_name << " couldn't sign " << form.getName()
				  << " because: " << exc.what() << std::endl;
	}

}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &input)
{
	out << input.getName() << ", bureaucrat grade " << input.getGrade() << std::endl;
	return out;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade is too high, it can not be set.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade is too low, it can not be set.";
}
