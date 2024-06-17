/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:01:26 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/04 12:13:10 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Robot", 25, 5) {
	this->_target = target;
	std::cout << "Original constructor of PresidentialPardonForm got called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor of PresidentialPardonForm got called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()) {
	this->_target = copy._target;
	*this = copy;
		std::cout << "Copy constructor of PresidentialPardonForm got called." << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & copy)
{
	this->_target = copy.getTarget();
	return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const {
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getSignedForm() == false)
		throw (AForm::UnsignedFormException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}