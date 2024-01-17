/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:11:24 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/17 12:11:55 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private :

public :
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap( const ScavTrap& copy);
	~ScavTrap();

	ScavTrap& operator=( const ScavTrap &var);
	void attack( const std::string& target );
	void gaurdGate();
};

#endif