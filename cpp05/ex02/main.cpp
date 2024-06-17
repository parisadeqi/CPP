/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:23:48 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/04 12:33:20 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main (void) {
	// try
	// {
	// 	Bureaucrat b("Bureaucrat", 11);
	// 	ShrubberyCreationForm shrubby("Shrubb");
		
	// 	shrubby.beSigned(b);
	// 	std::cout << shrubby << std::endl;
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	//std::srand(std::time(0)); // common practice to seed the pseudo-random number generator

	// Constructors
	std::cout << std::endl;
	std::cout << "CONSTRUCTING:" << std::endl;
	std::cout << "----------------------------" << std::endl;

	Bureaucrat				bob("Bob", 1);
	Bureaucrat				bill("Bill", 142);
	ShrubberyCreationForm	shrub("shrub");
	RobotomyRequestForm		robo("robo");
	PresidentialPardonForm	president("president");
	std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	// Executing
	// ShrubberyCreationForm : sign 145, exec 137
	// RobotomyRequestForm sign 72, exec 45
	// PresidentialPardonForm sign 25, exec 5

	std::cout << "SHRUBBERY CREATION FORM:" << std::endl;
	std::cout << "----------------------------" << std::endl;


	// std::cout << std::endl << "[UNSIGNED]" << std::endl;
	// bob.executeForm(shrub);
	shrub.beSigned(bob);


	// std::cout << std::endl << "[SIGNED]" << std::endl;
	// bob.executeForm(shrub);
	// std::cout << std::endl;


	// std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
	// bill.executeForm(shrub);
	// std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	std::cout << std::endl;
	std::cout << "ROBOTOMY REQUEST FORM:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << std::endl << "[UNSIGNED]" << std::endl;
	// bob.executeForm(robo);
	robo.beSigned(bob);


	// std::cout << std::endl << "[SIGNED (50% failure chance)]" << std::endl;
	// bob.executeForm(robo);
	// bob.executeForm(robo);
	// bob.executeForm(robo);
	// bob.executeForm(robo);
	// bob.executeForm(robo);
	// std::cout << std::endl;


	// std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
	// bill.executeForm(robo);
	// std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	std::cout << std::endl;
	std::cout << "PRESIDENTIAL PARDON FORM:" << std::endl;
	std::cout << "----------------------------" << std::endl;


	// std::cout << std::endl << "[UNSIGNED]" << std::endl;
	// bob.executeForm(president);
	president.beSigned(bob);


	std::cout << std::endl << "[SIGNED]" << std::endl;
	bob.executeForm(president);
	std::cout << std::endl;


	// std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
	// bill.executeForm(president);
	// std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	std::cout << std::endl;
	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	return (0);
	//-------------------------------------------------------	
	return (0);
}