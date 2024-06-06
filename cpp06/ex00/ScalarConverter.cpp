/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:13:30 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/06 18:38:04 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(const std::string& argv1){
	std::cout << "Original constructor of ScalarConverter got called." << std::endl;
}

ScalarConverter::ScalarConverter (const ScalarConverter& copy) {
	*this = copy;
	std::cout << "Copy constructor of ScalarConverter got called." << std::endl;
}

ScalarConverter::~ScalarConverter () {
	std::cout << "Destructor of ScalarConverter got called." << std::endl;
}

ScalarConverter&	ScalarConverter::operator= (const ScalarConverter& var)
{
	return (*this);
}

e_type ScalarConverter::detectType(std::string argv1) {

	// char
	if (argv1.size() == 1 && std::isprint(argv1[0]) && !std::isdigit(argv1[0])) {
		type = CHAR;
		// char c = argv1[0];
		// std::cout << "char: '" << c << "'" << std::endl;
		// std::cout << "int: " << static_cast<int>(c) << std::endl;
		// std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		// std::cout << "double: " << static_cast<double>(c) << std::endl;
		// return;
	}
}
