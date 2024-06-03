/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:01:26 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/03 17:38:03 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137) {
	this->_target = target;
	std::cout << "Original constructor of ShrubberyCreationForm got called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor of ShrubberyCreationForm got called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()) {
	this->_target = copy._target;
	*this = copy;
		std::cout << "Copy constructor of ShrubberyCreationForm got called." << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & copy)
{
	this->_target = copy.getTarget();
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const {
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::string	tree = 
	"     ccee88oo          \n"
	"  C8O8O8Q8PoOb o8oo    \n"
	" dOB69QO8PdUOpugoO9bD  \n"
	"CgggbU8OU qOp qOdoUOdcb\n"
	"   6OuU  /p u gcoUodpP \n"
	"      \\\\//  /douUP   \n"
	"        \\\\////       \n"
	"         |||/\\        \n"
	"         |||\\/        \n"
	"         |||||         \n"
	"  .....\\//||||\\....  \n";
	if (this->getSignedForm() == false)
		throw (AForm::UnsignedFormException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());
	else
	{
		std::ofstream	ofs(this->_target);
		if (!ofs.is_open())
		{
			std::cout << "Coulnd't open the output file" << std::endl;
			return ;
		}
		ofs << tree;
	}
}