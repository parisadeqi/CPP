/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:40:45 by psadeghi          #+#    #+#             */
/*   Updated: 2024/02/02 13:10:05 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	_materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& var);
		MateriaSource& operator=(const MateriaSource& var);
		~MateriaSource();

		void	learnMateria(AMateria*);
		AMateria* createMateria(std::string const& type);
};

#endif