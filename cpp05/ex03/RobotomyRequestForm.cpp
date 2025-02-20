/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:34:43 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/17 19:34:45 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
AForm("RobotomyRequestForm", 72, 45), _target("standard")
{
	std::cout << "RRF default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RRF target constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref) :
AForm("RobotomyRequestForm", 72, 45), _target(ref._target)
{
	std::cout << "RRF copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RRF destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	std::cout << "RRF copy assignment operator called" << std::endl;
	if (this != &ref)
		this->_target = ref._target;
	return *this;
}

void	RobotomyRequestForm::act(Bureaucrat const &executor) const
{
	std::cout << "VRRRRRR! VRRRRRR!" << std::endl;
	if (rand() % 2)
		std::cout << "Robotomy of " << this->_target << " successfully executed by " << executor.getName() << std::endl;
	else
		std::cout << "Robotomy of " << this->_target << " unsuccessfully executed by " << executor.getName() << std::endl;
}
