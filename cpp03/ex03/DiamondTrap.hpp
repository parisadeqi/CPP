/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:33:10 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/18 14:40:00 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string _name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap( const DiamondTrap& copy);
	~DiamondTrap();

	DiamondTrap& operator=( const DiamondTrap &var);
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void gaurdGate();
	void highFiveGuys( void );
	void whoAmI();
};

#endif