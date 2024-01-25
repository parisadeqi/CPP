/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:55:47 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/24 16:12:32 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	this->brain = new Brain();
	std::cout << "Original constructor of Cat got called." << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Original destructor of Cat got called." << std::endl;
}


void	Cat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}

Cat::Cat (const Cat& copy) {
	*this = copy;
	std::cout << "Cat copy constructor got called." << std::endl;
}

Cat&	Cat::operator=( const Cat& var ) {
	if (this != &var)
	{
		this->_type = var._type;
		this->brain = new Brain(*var.brain);
	}
	return (*this);
}
