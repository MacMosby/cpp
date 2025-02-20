/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:34:21 by mrodenbu          #+#    #+#             */
/*   Updated: 2025/02/17 19:34:23 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
AForm("ShrubberyCreationForm", 145, 137), _target("standard")
{
	std::cout << "SCF default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "SCF target constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref) :
AForm("ShrubberyCreationForm", 145, 137), _target(ref._target)
{
	std::cout << "SCF copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "SCF destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	std::cout << "SCF copy assignment operator called" << std::endl;
	if (this != &ref)
		this->_target = ref._target;
	return *this;
}

void	ShrubberyCreationForm::act(Bureaucrat const &executor) const
{
	std::string		fileName = this->_target + "_shrubbery";
	std::ofstream	outFileStream;

	outFileStream.open(fileName.c_str());
	if (outFileStream.fail())
	{
		std::cerr << "Error opening outfile." << std::endl;
		return ;
	}

	outFileStream << "      *      \n";
    outFileStream << "     ***     \n";
    outFileStream << "    *****    \n";
    outFileStream << "   *******   \n";
    outFileStream << "  *********  \n";
    outFileStream << " *********** \n";
    outFileStream << "      |      \n";

	outFileStream.close();

	std::cout << "ASCII tree written into file: " << fileName << " by " << executor.getName() << std::endl;
}
