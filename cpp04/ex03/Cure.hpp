/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:52:17 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/05 13:28:09 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure& copy);
		~Cure();

		Cure& operator=( Cure const& var);

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif