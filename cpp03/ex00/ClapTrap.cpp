/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:47:39 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/04 17:04:25 by psadeghi         ###   ########.fr       */
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

ClapTrap::~ClapTrap () {
	std::cout << ""
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << "causing " << _hitPoints << " points of damage!" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount) {

}

void	ClapTrap::beRepaired(unsigned int amount) {

}