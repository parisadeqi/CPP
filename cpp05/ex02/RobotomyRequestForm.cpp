/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:01:26 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/04 12:08:40 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robot", 72, 45) {
	this->_target = target;
	std::cout << "Original constructor of RobotomyRequestForm got called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor of RobotomyRequestForm got called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()) {
	this->_target = copy._target;
	*this = copy;
		std::cout << "Copy constructor of RobotomyRequestForm got called." << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & copy)
{
	this->_target = copy.getTarget();
	return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const {
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getSignedForm() == false)
		throw (AForm::UnsignedFormException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());
	std::cout << "Drilling NOISES" << std::endl;
	int success = std::rand() % 2;
	if (success == 1)
		std::cout << this->_target << " has been robotomized successfully!" << std::endl;
	else
		throw(RobotomyRequestForm::RobotomyFailiurException());
}