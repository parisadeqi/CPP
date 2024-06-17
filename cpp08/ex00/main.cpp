/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:14:32 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/17 12:35:54 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	displayInt(int i) {
	std::cout << i << std::endl;
}

void listTests(void) {
	std::list<int> lst;

	for (int i = 0; i <= 6; i++) {
		lst.push_back(i);
	}

	std::cout << "List elements :" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::for_each(lst.begin(), lst.end(), displayInt);
	std::cout << std::endl;

	std::cout << "Existing list element 2: " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	try {
		easyfind(lst, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Non existing list element -2: " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	try {
		easyfind(lst, -2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void vectorTests(void) {
	std::vector<int> vec;

	for (int i = 0; i <= 6; i++) {
		vec.push_back(i);
	}

	std::cout << "Vector elements :" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::for_each(vec.begin(), vec.end(), displayInt);
	std::cout << std::endl;

	std::cout << "Existing vector element 2: " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	try {
		easyfind(vec, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	std::cout << "Non existing vector element -2: " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	try {
		easyfind(vec, -2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
}

int main() {
	listTests();
	vectorTests();

	return 0;
}