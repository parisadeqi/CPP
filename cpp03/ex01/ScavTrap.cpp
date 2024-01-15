/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:20:37 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/15 14:57:54 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "Original ScavTrap constructor get called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Constructor with name as variable of ScavTrap got called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "Copy constructor got called." << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap() {
	std::cout << "Deconstructor of ScavTrap got called." << std::endl;
}


ScavTrap& ScavTrap::operator=( const ScavTrap &var) {
	if (this != &var) {
		this->_hitPoints = var._hitPoints;
		this->_attackDamage = var._attackDamage;
		this->_energyPoints = var._energyPoints;
		this->_name = var._name;
	}
	return (*this);
}

