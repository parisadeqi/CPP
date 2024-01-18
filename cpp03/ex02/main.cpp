/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:47:59 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/18 13:27:26 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void) {
	FragTrap first("Parisa");

	first.attack("Ehsan");
	first.highFiveGuys();

	return (0);
}