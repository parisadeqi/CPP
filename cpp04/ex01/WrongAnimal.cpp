/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:32:42 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/23 14:33:35 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout << "Original constructor of WrongAnimal got called." << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal& copy) {
	*this = copy;
	std::cout << "Copy constructor of WrongAnimal got called." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type) {
	std::cout << "Constructor of WrongAnimal got called." << std::endl;
}

WrongAnimal::~WrongAnimal () {
	std::cout << "Destructor of WrongAnimal got called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator= (const WrongAnimal& var)
{
	this->_type = var._type;

	return (*this);
}

std::string	WrongAnimal::getType() const{
	return (this->_type);
}

void	WrongAnimal::makeSound() const{
	std::cout << "Sound of WrongAnimals :))" << std::endl;
}