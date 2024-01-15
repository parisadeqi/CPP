/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:47:39 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/15 13:05:22 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Original constructor get called." << std::endl;
}

ClapTrap::ClapTrap (std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Constructor with name as variable got called." << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& copy) {
	std::cout << "Copy constructor got called." << std::endl;
	*this = copy;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap &var ) {
	if (this != &var) {
		this->_hitPoints = var._hitPoints;
		this->_attackDamage = var._attackDamage;
		this->_energyPoints = var._energyPoints;
		this->_name = var._name;
	}
	return (*this);
}

ClapTrap::~ClapTrap () {
	std::cout << "Deconstructor got called." << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can not attack since it has not enough points :(" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if ((unsigned int)_hitPoints > amount) {
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	else {
		std::cout << "ClapTrap " << _name << " has no points left!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap can not get repaired since it has not enough points :(" << std::endl;
	}
	else {
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
}

int		ClapTrap::getHitPoints (void ) {
	return _hitPoints;
}

int		ClapTrap::getEnergyPoints ( void ) {
	return _energyPoints;
}

int		ClapTrap::getAttackDamage (void ) {
	return _attackDamage;
}
