/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:15:46 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/24 11:06:44 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Original constructor of Brain got called." << std::endl;
}

Brain::~Brain() {
	std::cout << "Original destructor of Brain got called." << std::endl;
}

Brain::Brain( const Brain& copy) {
	*this = copy;
	std::cout << "Copy constructor of Brain got called." << std::endl;
}

Brain&	Brain::operator=( const Brain& var) {
	if (this != &var) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = var._ideas[i];
		}
	}
	return (*this);
}
