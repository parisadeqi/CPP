/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:50:40 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/24 16:12:12 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
	this->brain = new Brain();
	std::cout << "Original constructor of Dog got called." << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Original destructor of Dog got called." << std::endl;
}

Dog::Dog (const Dog& copy) {
	*this = copy;
	std::cout << "Dog copy constructor got called." << std::endl;
}

Dog&	Dog::operator=( const Dog& var ) {
	if (this != &var)
	{
		this->_type = var._type;
		this->brain = new Brain(*var.brain);
	}
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << "WOOF WOOF" << std::endl;
}