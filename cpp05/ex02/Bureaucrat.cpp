/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:13:31 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/27 14:16:37 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureacurat.hpp"

Bureacurat::Bureacurat(std::string name, int grade) : _name(name), _grade(grade){
	std::cout << "Original constructor of Bureacurat got called." << std::endl;
	if (this->_grade < 1)
		throw Bureacurat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureacurat::GradeTooLowException();
}

Bureacurat::Bureacurat (const Bureacurat& copy) {
	*this = copy;
	std::cout << "Copy constructor of Bureacurat got called." << std::endl;
}

Bureacurat::~Bureacurat () {
	std::cout << "Destructor of Bureacurat got called." << std::endl;
}

Bureacurat&	Bureacurat::operator= (const Bureacurat& var)
{
	this->_grade = var.getGrade();

	return (*this);
}

std::string	Bureacurat::getName() const {
	return (this->_name);
}

int Bureacurat::getGrade() const {
	return (this->_grade);
}

void	Bureacurat::increamentGrade() {
	if (this->_grade <= 1)
		throw Bureacurat::GradeTooHighException();
	this->_grade -= 1;
}

void	Bureacurat::decrementGrade() {
	if (this->_grade >= 150)
		throw Bureacurat::GradeTooLowException();
	this->_grade += 1;
}

void Bureacurat::signForm(Form& var) {
	try {
		var.beSigned(*this);
		std::cout << this->_name << " signed "  << var.getName() << std::endl;
	}
	catch (Form::GradeTooLowException& e){
		std::cout << this->_name << " couldn't sign " << var.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, const Bureacurat& var) {
	o << var.getName() << ", bureaucrat grade " << var.getGrade() << std::endl;
	return o;
}