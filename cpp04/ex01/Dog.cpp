/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:50:40 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/23 13:32:34 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Original constructor of Dog got called." << std::endl;
}

Dog::~Dog() {
	std::cout << "Original destructor of Dog got called." << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "WOOF WOOF" << std::endl;
}