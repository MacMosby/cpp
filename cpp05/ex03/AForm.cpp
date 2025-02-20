/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:52:58 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/17 15:53:00 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() :
_name("Standard AForm"), _signed(false), _grade_to_sign(150), _grade_to_execute(150)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name) :
_name(name), _signed(false), _grade_to_sign(150), _grade_to_execute(150)
{
	std::cout << "AForm name constructor called" << std::endl;
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute) :
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
	std::cout << "AForm data constructor called" << std::endl;
}

AForm::AForm(AForm const &ref) :
_name(ref._name), _signed(ref._signed), _grade_to_sign(ref._grade_to_sign), _grade_to_execute(ref._grade_to_execute)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm &AForm::operator=(AForm const &ref)
{
	this->_signed = ref._signed;
	std::cout << "AForm Copy assignment operator called" << std::endl;
	return *this;
}

std::string const AForm::getName() const
{
	return this->_name;
}

bool AForm::getSigned() const
{
	return this->_signed;
}

int AForm::getGradeToSign() const
{
	return this->_grade_to_sign;
}

int AForm::getGradeToExecute() const
{
	return this->_grade_to_execute;
}

void AForm::beSigned(Bureaucrat &ref)
{
	if (ref.getGrade() > this->_grade_to_sign)
		throw GradeTooLowException();
	else
		this->_signed = true;
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
		throw FormNotSignedException();
	else if (executor.getGrade() > this->_grade_to_execute)
		throw GradeTooLowException();
	else
		this->act(executor);
}

std::ostream	&operator<<(std::ostream &out, AForm const &input)
{
	out << "AForm name: " << input.getName() << std::endl
		<< "Signed status: " << input.getSigned() << std::endl
		<< "Required grade to sign: " << input.getGradeToSign() << std::endl
		<< "Required grade to execute: " << input.getGradeToExecute() << std::endl;
	return out;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "The grade is too high.";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "The grade is too low.";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "The form is not signed.";
}




