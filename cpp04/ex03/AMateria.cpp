/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:56:09 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/06 12:18:30 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const& type ) : _type(type) {
	std::cout << this->_type << " constructor got called." << std::endl;
}

AMateria::~AMateria() {
	std::cout << this->_type << " got destructed." << std::endl;
}

AMateria::AMateria (AMateria const& copy) {
	*this = copy;
}

std::string const& AMateria::getType() const {
	return this->_type;
}

AMateria* AMateria::clone() const {
	return (AMateria*)this;
}

void	AMateria::use ( ICharacter& target) {
	std::cout << this->_type << " used " << target.getName() << std::endl;
}