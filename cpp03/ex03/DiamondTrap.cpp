/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:40:04 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/18 14:40:17 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {
	std::cout << "Original DiamondTrap constructor get called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 100;
	this->FragTrap::_attackDamage = 30;
	this->ClapTrap::_name = name + "_clap_name";
	std::cout << "Constructor with name as variable of DiamondTrap got called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	std::cout << "Copy constructor got called." << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor of DiamondTrap got called." << std::endl;
}


DiamondTrap& DiamondTrap::operator=( const DiamondTrap &var) {
	if (this != &var) {
		this->FragTrap::_hitPoints = var.FragTrap::_hitPoints;
		this->FragTrap::_attackDamage = var.FragTrap::_attackDamage;
		this->ScavTrap::_energyPoints = var.ScavTrap::_energyPoints;
		this->FragTrap::_name = var.FragTrap::_name;
		this->ScavTrap::_name = var.ScavTrap::_name;
		this->_name = var._name;
	}
	return (*this);
}

void	DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount) {
	if ((unsigned int)FragTrap::_hitPoints > amount) {
		std::cout << "DiamondTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
		this->FragTrap::_hitPoints -= amount;
	}
	else {
		std::cout << "DiamondTrap " << _name << " has no points left!" << std::endl;
	}
}

void	DiamondTrap::beRepaired(unsigned int amount) {
	if (this->ScavTrap::_energyPoints <= 0) {
		std::cout << "DiamondTrap can not get repaired since it has not enough points :(" << std::endl;
	}
	else {
		this->FragTrap::_hitPoints += amount;
		this->ScavTrap::_energyPoints -= 1;
	}
}

void	DiamondTrap::gaurdGate() {
	std::cout << "DiamondTrap " << _name << " is now in keeper mode." << std::endl;
}

void	DiamondTrap::highFiveGuys( void ) {
	std::cout << "DiamondTrap " << _name << " High fives you! :))" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}