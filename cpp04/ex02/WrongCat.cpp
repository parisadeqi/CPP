/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:34:44 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/23 14:42:05 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Original constructor of WrongCat got called." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Original destructor of WrongCat got called." << std::endl;
}


void	WrongCat::makeSound() const{
	std::cout << "Wrong Meow Meow" << std::endl;
}