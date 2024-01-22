/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 13:40:04 by psadeghi      #+#    #+#                 */
/*   Updated: 2024/01/22 13:41:46 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 100;
	this->FragTrap::_attackDamage = 30;
	this->ClapTrap::_name = name + "_clap_name";
	std::cout << "Constructor with name as variable of DiamondTrap got called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor of DiamondTrap got called." << std::endl;
}

void	DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}