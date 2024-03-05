/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:01:01 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/06 12:20:20 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << _name << " got created." << std::endl;
}

Character::Character(const Character& var) : _name(var._name)
{
	*this = var;
	std::cout << "Copy constructor got called." << std::endl;
}

Character::~Character() {
	std::cout << "Character " << this->_name << " got destroyed" << std::endl;
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

std::string const&	Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << m->getType() << " got equiped." << std::endl;
			return;
		}
	}
	std::cout << "Couldn't get it equiped." << std::endl;
}

void Character::unequip(int idx) {
	if (this->_inventory[idx] != NULL)
	{
		delete this->_inventory[idx];
		std::cout << this->_name << " inventory got removed." << std::endl;
		return ;
	}
	else
		std::cout << this->_name << " inventory couldn't get removed." << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
		std::cout << this->_name << " use " << this->_inventory[idx]->getType() << std::endl;
	}
	else
		std::cout << this->_name << "can not use an inventory." << std::endl;
}