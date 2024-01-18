/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:14:00 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/18 13:31:40 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Original FragTrap constructor get called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Constructor with name as variable of FragTrap got called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "Copy constructor got called." << std::endl;
	*this = copy;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor of FragTrap got called." << std::endl;
}


FragTrap& FragTrap::operator=( const FragTrap &var) {
	if (this != &var) {
		this->_hitPoints = var._hitPoints;
		this->_attackDamage = var._attackDamage;
		this->_energyPoints = var._energyPoints;
		this->_name = var._name;
	}
	return (*this);
}

void	FragTrap::attack( const std::string& target ) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "FragTrap " << _name << " can not attack since it has not enough points :(" << std::endl;
	}
	else {
		std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void	FragTrap::takeDamage(unsigned int amount) {
	if ((unsigned int)_hitPoints > amount) {
		std::cout << "FragTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	else {
		std::cout << "FragTrap " << _name << " has no points left!" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints <= 0) {
		std::cout << "FragTrap can not get repaired since it has not enough points :(" << std::endl;
	}
	else {
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
}

void	FragTrap::gaurdGate() {
	std::cout << "FragTrap " << _name << " is now in keeper mode." << std::endl;
}

void	FragTrap::highFiveGuys( void ) {
	std::cout << "FragTrap " << _name << " High fives you! :))" << std::endl;
}
