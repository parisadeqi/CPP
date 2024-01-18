/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:47:59 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/18 14:37:38 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void) {
	DiamondTrap first("Parisa");

	first.attack("Ehsan");
	first.highFiveGuys();
	first.whoAmI();

	return (0);
}