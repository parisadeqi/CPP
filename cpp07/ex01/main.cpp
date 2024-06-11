/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:40:16 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/11 16:52:35 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void	displayName(int const& i) {
	std::cout << "My name is Parisa : " << i << std::endl;
}

template <typename T>
void	displayNameTemplate(T const& t) {
	std::cout << "My name is Parisa : " << t << std::endl;
}


int main (void) {
	int array[5] = {1, 2, 3, 4, 5};

	iter(array, 5, displayName);
	iter(array, 5, displayNameTemplate);

	std::string names[2] = {"Julia", "Mirjam"};

	iter(names, 2, displayNameTemplate);
}