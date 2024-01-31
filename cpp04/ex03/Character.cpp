/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:01:01 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/31 15:16:40 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << "Original constructor got called.!" << std::endl;
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << _name << "got created." << std::endl;
}

Character::Character(const Character& var)
{
	*this = var;
	std::cout << "Copy constructor got called." << std::endl;
}

Character::~Character() {
	std::cout << "Character " << this->_name << " destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character& Character::operator=(const Character& var) {
	this->_name = var._name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = var._inventory[i];
	}
	return (*this);
}