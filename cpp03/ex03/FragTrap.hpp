/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:13:52 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/18 14:34:24 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
private :

public :
	FragTrap();
	FragTrap(std::string name);
	FragTrap( const FragTrap& copy);
	~FragTrap();

	FragTrap& operator=( const FragTrap &var);
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void gaurdGate();
	void highFiveGuys( void );
};





#endif