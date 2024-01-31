/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:40:45 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/31 12:45:56 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource {
    private:

    public:
		MateriaSource();
		MateriaSource(std::string type);
		MateriaSource(const MateriaSource& var);
		MateriaSource& operator=(const MateriaSource& var);
		~MateriaSource();
};

#endif