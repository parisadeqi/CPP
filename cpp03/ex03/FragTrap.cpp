/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 13:14:00 by psadeghi      #+#    #+#                 */
/*   Updated: 2024/01/22 13:42:27 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Constructor with name as variable of FragTrap got called." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor of FragTrap got called." << std::endl;
}

void	FragTrap::highFiveGuys( void ) {
	std::cout << "FragTrap " << _name << " High fives you! :))" << std::endl;
}
