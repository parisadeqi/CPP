/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:00:14 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/05 13:35:38 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->_materias[i] = NULL;
	}
	std::cout << "Original constructor of MateriaSource got called." << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		delete this->_materias[i];
	}
	std::cout << "All the MateriaSources got destroyed." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& var) {
	*this = var;
	std::cout << "Copy constructor of MateriaSource got called." << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& var) {
	for (int i = 0; i < 4; i++) {
		this->_materias[i] = var._materias[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (_materias[i] == NULL)
		{
			_materias[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for ( int i = 0; i < 4; i++ ) {
		if ( _materias[i] && _materias[i]->getType() == type )
			return _materias[i]->clone();
	}
	return NULL;
}