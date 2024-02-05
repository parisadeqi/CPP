/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:54:49 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/05 13:13:24 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

#include <iostream>

class Ice : public AMateria {

	public:
		Ice();
		Ice(const Ice& copy);
		~Ice();
		Ice& operator=( Ice const& var);

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif