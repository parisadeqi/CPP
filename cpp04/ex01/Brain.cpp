/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:15:46 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/23 16:19:07 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : Dog(), Cat() {
	std::cout << "Original constructor of Brain got called." << std::endl;
}

Brain::~Brain() {
	std::cout << "Original destructor of Brain got called." << std::endl;
}