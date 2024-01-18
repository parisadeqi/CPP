/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:20:37 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/18 13:29:49 by psadeghi         ###   ########.fr       */
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
	std::cout << "Destructor of ScavTrap got called." << std::endl;
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

void	ScavTrap::attack( const std::string& target ) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " can not attack since it has not enough points :(" << std::endl;
	}
	else {
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if ((unsigned int)_hitPoints > amount) {
		std::cout << "ScavTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	else {
		std::cout << "ScavTrap " << _name << " has no points left!" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints <= 0) {
		std::cout << "ScavTrap can not get repaired since it has not enough points :(" << std::endl;
	}
	else {
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
}

void	ScavTrap::gaurdGate() {
	std::cout << "ScavTrap " << _name << " is now in keeper mode." << std::endl;
}
