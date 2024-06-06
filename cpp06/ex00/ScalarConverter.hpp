/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:09:41 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/06 18:40:24 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>

enum e_type {
	UNDETERMINED,
	INVALID,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NAN_,
	INF
};

// Convert to two things:
// 		char: Non displayable
// 		int: 0
// 		float: 0.0f
// 		double: 0.0

class ScalarConverter {
	private:
		ScalarConverter(const std::string& argv1);
		e_type _type;

	public:
		~ScalarConverter();
		ScalarConverter(ScalarConverter const & ref);
		ScalarConverter & operator=(ScalarConverter const & ref);
		static e_type detectType(std::string argv1) {
			// char
			if (argv1.size() == 1 && std::isprint(argv1[0]) && !std::isdigit(argv1[0])) {
				ScalarConverter::_type = CHAR;
				// char c = argv1[0];
				// std::cout << "char: '" << c << "'" << std::endl;
				// std::cout << "int: " << static_cast<int>(c) << std::endl;
				// std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
				// std::cout << "double: " << static_cast<double>(c) << std::endl;
				// return;
			}
		}


		static void	convert(const std::string& argv1) {
			if (argv1.empty()) {
			std::cerr << "Error: Empty string." << std::endl;
			return;
		}

		// if it is a char
		if (argv1.size() == 1 && std::isprint(argv1[0]) && !std::isdigit(argv1[0])) {
			char c = argv1[0];
			std::cout << "char: '" << c << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(c) << std::endl;
			std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(c) << std::endl;
			return;
		}

		// fun things -> which is not correct!
		if (argv1 == "-inf" || argv1 == "+inf" || argv1 == "nan") {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << argv1 << std::endl;
			std::cout << "double: " << argv1 << std::endl;
			return;
		}
		// // Try converting to int
		// try {
			int i = std::stoi(argv1);
			std::cout << "char: ";
			if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max() || !std::isprint(i)) {
				std::cout << "Non displayable" << std::endl;
			} else {
				std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
			}
			std::cout << "int: " << i << std::endl;
			std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(i) << std::endl;
			return;
		// } catch (...) {
		// 	// Not convertible to int
		// }

		// // Try converting to float
		// try {
			float f = std::stof(argv1);
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: " << static_cast<int>(f) << std::endl;
			std::cout << "float: " << f << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(f) << std::endl;
			return;
		// } catch (...) {
		// 	// Not convertible to float
		// }

		// // Try converting to double
		// try {
			double d = std::stod(argv1);
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: " << static_cast<int>(d) << std::endl;
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
			return;
		// } catch (...) {
		// 	// Not convertible to double
		// }

		// // Handle special cases
		// if (argv1 == "-inff" || argv1 == "+inff" || argv1 == "nanf" || argv1 == "-inf" || argv1 == "+inf" || argv1 == "nan") {
		// 	std::cout << "char: impossible" << std::endl;
		// 	std::cout << "int: impossible" << std::endl;
		// 	std::cout << "float: " << (argv1.back() == 'f' ? argv1 : argv1 + "f") << std::endl;
		// 	std::cout << "double: " << (argv1.back() == 'f' ? argv1.substr(0, argv1.size() - 1) : argv1) << std::endl;
		// 	return;
		// }

		std::cerr << "Error: Invalid argv1." << std::endl;
	}
};

#endif