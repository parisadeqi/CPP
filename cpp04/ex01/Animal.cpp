/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:50:29 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/23 14:26:06 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
	std::cout << "Original constructor of Animal got called." << std::endl;
}

Animal::Animal (const Animal& copy) {
	*this = copy;
	std::cout << "Copy constructor of Animal got called." << std::endl;
}

Animal::Animal( std::string type ) : _type(type) {
	std::cout << "Constructor of Animal got called." << std::endl;
}

Animal::~Animal () {
	std::cout << "Destructor of Animal got called." << std::endl;
}

Animal&	Animal::operator= (const Animal& var)
{
	this->_type = var._type;

	return (*this);
}

std::string	Animal::getType() const{
	return (this->_type);
}

void	Animal::makeSound() const{
	std::cout << "Sound of Animals :))" << std::endl;
}