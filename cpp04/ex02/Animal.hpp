/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:34:14 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/23 14:10:47 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string	_type;

public:
	Animal();
	Animal(std::string type);
	Animal( const Animal& copy );
	Animal& operator=(const Animal& var);
	virtual ~Animal();

	std::string	getType() const;
	virtual void	makeSound() const;
};


#endif