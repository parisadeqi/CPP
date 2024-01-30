/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:42:30 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/30 13:49:03 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;

	public:
		Character();
		Character(std::string type);
		Character(const Character& var);
		Character& operator=(const Character& var);
		~Character();

		std::string const& getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif