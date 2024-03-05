/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:23:49 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/06 10:43:56 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string	_type;

public:
	AMateria( std::string const & type);
	AMateria( AMateria const& copy);
	virtual ~AMateria();

	std::string const& getType() const; // Returns the materia typ
	virtual AMateria* clone () const = 0;
	virtual void use(ICharacter& target);
};

#endif