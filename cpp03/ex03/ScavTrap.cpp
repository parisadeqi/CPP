/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 14:20:37 by psadeghi      #+#    #+#                 */
/*   Updated: 2024/01/22 13:43:46 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Constructor with name as variable of ScavTrap got called." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor of ScavTrap got called." << std::endl;
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

void	ScavTrap::gaurdGate() {
	std::cout << "ScavTrap " << _name << " is now in keeper mode." << std::endl;
}
