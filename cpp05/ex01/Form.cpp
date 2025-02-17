/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:52:58 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/17 15:53:00 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() :
_name("Standard Form"), _signed(false), _grade_to_sign(150), _grade_to_execute(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name) :
_name(name), _signed(false), _grade_to_sign(150), _grade_to_execute(150)
{
	std::cout << "Form name constructor called" << std::endl;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) :
_name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (this->_grade_to_sign < 1)
		throw GradeTooHighException();
	else if (this->_grade_to_sign > 150)
		throw GradeTooLowException();
	if (this->_grade_to_execute < 1)
		throw GradeTooHighException();
	else if (this->_grade_to_execute > 150)
		throw GradeTooLowException();
	std::cout << "Form data constructor called" << std::endl;
}

Form::Form(Form const &ref) :
_name(ref._name), _signed(ref._signed), _grade_to_sign(ref._grade_to_sign), _grade_to_execute(ref._grade_to_execute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(Form const &ref)
{
	this->_signed = ref._signed;
	std::cout << "Form Copy assignment operator called" << std::endl;
	return *this;
}

std::string const Form::getName() const
{
	return this->_name;
}

bool Form::getSigned() const
{
	return this->_signed;
}

int Form::getGradeToSign() const
{
	return this->_grade_to_sign;
}

int Form::getGradeToExecute() const
{
	return this->_grade_to_execute;
}

void Form::beSigned(Bureaucrat &ref)
{
	if (ref.getGrade() > this->_grade_to_sign)
		throw GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream	&operator<<(std::ostream &out, Form const &input)
{
	out << "Form name: " << input.getName() << std::endl
		<< "Signed status: " << input.getSigned() << std::endl
		<< "Required grade to sign: " << input.getGradeToSign() << std::endl
		<< "Required grade to execute: " << input.getGradeToExecute() << std::endl;
	return out;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "The grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "The grade is too low.";
}
