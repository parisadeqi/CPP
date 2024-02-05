/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:26:34 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/05 13:27:54 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure () : AMateria("cure") {
	std::cout << "Original constructor of Cure got called." << std::endl;
}

Cure::Cure (const Cure& copy) : AMateria("cure") {
	*this = copy;
}

Cure& Cure::operator=( Cure const& var) {
	this->_type = var._type;
	return (*this);
}

Cure::~Cure () {
	std::cout << "Cure got destroyed." << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
	std::cout << "Shoots an Cure bolt at " << target.getName() << std::endl;
}