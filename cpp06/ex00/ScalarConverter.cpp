/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/06 17:13:30 by psadeghi      #+#    #+#                 */
/*   Updated: 2024/06/10 14:13:10 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(const std::string& literal){
	std::cout << "Original constructor of ScalarConverter" << literal <<  " got called." << std::endl;
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
	(void)var;
	return (*this);
}

void ScalarConverter::convert(std::string literal) 
{
	std::string specialTypes[6] = 
	{
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};
	std::string toChar = "";
	int toInt = 0;
	float toFloat = 0;
	double toDouble = 0;

	if (literal.size() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0])) {
		char c = literal[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return;
	}
	toInt = std::atoi(literal.c_str());
	if (literal[literal.length() - 1] == 'f') 
	{
		toFloat = std::atof(literal.c_str());
		toDouble = static_cast<double>(toFloat);
	} else 
	{
		toDouble = std::atof(literal.c_str());
		toFloat = static_cast<float>(toDouble);
	}
	for (int i = 0; i < 6; ++i) 
	{
		if (literal == specialTypes[i]) 
		{
			toChar = "imposible";
			break;
		}
	}
	if (toChar == "" && std::isprint(toInt)) 
	{
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	} 
	else if (toChar == "") 
	{
		toChar = "Non displayable";
	}
	std::cout << "char: " << toChar << std::endl;
	if (toChar == "imposible") 
		std::cout << "int: imposible" << std::endl;
	else 
		std::cout << "int: " << toInt << std::endl;

	if (toChar == "imposible" && toFloat == 0) 
	{
		std::cout << "float: imposible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	} 
	else 
	{
		if (toChar != "imposible" && toFloat - static_cast<int>(toFloat) == 0) 
		{
			std::cout << "float: " << toFloat << ".0f" << std::endl;
			std::cout << "double: " << toDouble << ".0" << std::endl;
		} 
		else 
		{
			std::cout << "float: " << toFloat << "f" << std::endl;
			std::cout << "double: " << toDouble << std::endl;
		}
	}
}