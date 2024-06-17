/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:40:43 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/04 14:41:54 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	this->_signedForm = false;
	if (_gradeToSign < 1 || _gradeToExecute < 1) {
		throw Form::GradeTooHighException();
	}
	if (_gradeToSign > 150 || _gradeToExecute > 150) {
		throw Form::GradeTooLowException();
	}
	std::cout << "Original constructor of Form got called." << std::endl;
}

Form::Form(const Form& copy) : _name(copy.getName()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute()) {
	*this = copy;
		std::cout << "Copy constructor of Form got called." << std::endl;
}

Form::~Form() {
	std::cout << "Destructor of Form got called." << std::endl;
}

Form&	Form::operator= (const Form& var)
{
	this->_signedForm = var.getSignedForm();

	return (*this);
}

bool Form::getSignedForm() const {
	return this->_signedForm;
}

std::string	Form::getName() const {
	return (this->_name);
}

int Form::getGradeToSign() const {
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

void Form::beSigned(const Bureaucrat& var) {
	if (var.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signedForm = true;
}


std::ostream& operator<<(std::ostream& o, const Form& var) {
	std::cout << "          Form Details          " << std::endl;
	std::cout << "Name of the Form: " << var.getName() << std::endl;
	std::cout << "Grade to sign: " << var.getGradeToSign() << std::endl;
	std:: cout << "Grade to execute: " << var.getGradeToExecute() << std::endl;
	std::cout << "The Form got Signed? " << std::boolalpha << var.getSignedForm() << std::endl;

	return o;
}