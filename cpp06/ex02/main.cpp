/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:10:21 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/11 12:10:39 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void) {
	Base *whoAmI;
	whoAmI = generate();
	identify(whoAmI);
	identify(*whoAmI);

	delete whoAmI;

	return (0);
}