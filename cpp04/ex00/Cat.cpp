/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:55:47 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/23 13:32:26 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Original constructor of Cat got called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Original destructor of Cat got called." << std::endl;
}


void	Cat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}