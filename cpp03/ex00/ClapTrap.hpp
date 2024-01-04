/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:48:05 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/04 16:59:06 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private :
	std::string _name;
	int	_hitPoints;
	int	_energyPoints;
	int	_attackDamage;

public :
	ClapTrap();
	ClapTrap(const ClapTrap& copy);
	ClapTrap(std::string name);
	~ClapTrap();

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
};



#endif