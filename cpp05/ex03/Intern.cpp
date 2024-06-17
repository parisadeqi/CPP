/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:54:21 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/04 14:32:37 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern got hired!" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern got fired!" << std::endl;
}

Intern::Intern(Intern const & ref) {
	(void)ref;
	*this = ref;
}

Intern & Intern::operator=(Intern const & ref) {
	(void)ref;
	return *this;
}

static AForm *new_robo(std::string target) {
	AForm *robo = new RobotomyRequestForm(target);
	return robo;
}

static AForm *new_shrub(std::string target) {
	AForm *shrub = new ShrubberyCreationForm(target);
	return shrub;
}

static AForm *new_president(std::string target) {
	AForm *president = new PresidentialPardonForm(target);
	return president;
}

AForm* Intern::makeForm(std::string form_name, std::string form_target) {
	AForm	*(*f[3])(std::string target) = { new_robo, new_president, new_shrub};
	std::string	name[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*form = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form_name == name[i])
			form = f[i](form_target);
	}
	if (form)
		std::cout << "Intern creates " << *form << std::endl;
	else
		throw (Intern::Exception());
	return (form);
}