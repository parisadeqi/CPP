/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:40:43 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/27 14:24:57 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	this->_signedForm = false;
	if (_gradeToSign < 1 || _gradeToExecute < 1) {
		throw AForm::GradeTooHighException();
	}
	if (_gradeToSign > 150 || _gradeToExecute > 150) {
		throw AForm::GradeTooLowException();
	}
	std::cout << "Original constructor of AForm got called." << std::endl;
}

AForm::AForm(const AForm& copy) : _name(copy.getName()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute()) {
	*this = copy;
		std::cout << "Copy constructor of AForm got called." << std::endl;
}

AForm::~AForm() {
	std::cout << "Destructor of AForm got called." << std::endl;
}

AForm&	AForm::operator= (const AForm& var)
{
	this->_signedForm = var.getSignedForm();

	return (*this);
}

bool AForm::getSignedForm() const {
	return this->_signedForm;
}

std::string	AForm::getName() const {
	return (this->_name);
}

int AForm::getGradeToSign() const {
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

void AForm::beSigned(const Bureaucrat& var) {
	if (var.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signedForm = true;
	std::cout << *this << " was signed by the bureaucrat " << var.getName() << " with a grade " << var.getGrade() << std::endl;
}


std::ostream& operator<<(std::ostream& o, const AForm& var) {
	std::cout << "          AForm Details          " << std::endl;
	std::cout << "Name of the AForm: " << var.getName() << std::endl;
	std::cout << "Grade to sign: " << var.getGradeToSign() << std::endl;
	std:: cout << "Grade to execute: " << var.getGradeToExecute() << std::endl;
	std::cout << "The AForm got Signed? " << var.getSignedForm() << std::endl;

	return o;
}