/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:08:53 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/05 13:24:44 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice () : AMateria("ice") {
	std::cout << "Original constructor of Ice got called." << std::endl;
}

Ice::Ice (const Ice& copy) : AMateria("ice") {
	*this = copy;
}

Ice& Ice::operator=( Ice const& var) {
	this->_type = var._type;
	return (*this);
}

Ice::~Ice () {
	std::cout << "ice got destroyed." << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {
	std::cout << "Shoots an ice bolt at " << target.getName() << std::endl;
}