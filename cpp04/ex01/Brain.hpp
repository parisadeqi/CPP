/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:00:21 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/24 11:11:40 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
protected:
	std::string	_ideas[100];

public:
	Brain();
	~Brain();
	Brain( const Brain& copy);
	Brain& operator=(const Brain& var);

};

#endif