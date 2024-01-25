/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:23:49 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/25 13:28:57 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
protected:


public:
	AMateria( std::string const & type);
	std::string const& getType() const ; // Returns the materia type

	virtual AMateria* clone () const = 0;
	virtual void use(ICharacter& target);
};

#endif