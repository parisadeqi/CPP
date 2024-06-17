/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:13:31 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/03 11:47:32 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	std::cout << "Original constructor of Bureaucrat got called." << std::endl;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat (const Bureaucrat& copy) {
	*this = copy;
	std::cout << "Copy constructor of Bureaucrat got called." << std::endl;
}

Bureaucrat::~Bureaucrat () {
	std::cout << "Destructor of Bureaucrat got called." << std::endl;
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat& var)
{
	this->_grade = var.getGrade();

	return (*this);
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::increamentGrade() {
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::decrementGrade() {
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& var) {
	o << var.getName() << ", bureaucrat grade " << var.getGrade() << std::endl;
	return o;
}