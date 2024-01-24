/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:31:12 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/23 14:32:32 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string	_type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal( const WrongAnimal& copy );
	WrongAnimal& operator=(const WrongAnimal& var);
	virtual ~WrongAnimal();

	std::string	getType() const;
	virtual void	makeSound() const;
};


#endif