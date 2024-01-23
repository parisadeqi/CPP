/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:00:21 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/23 16:19:04 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Dog.hpp"
#include "Cat.hpp"

class Brain : public Dog, public Cat {
protected:
	std::string	_ideas[100];

public:
	Brain();
	~Brain();

};

#endif