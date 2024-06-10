/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: psadeghi <psadeghi@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 11:09:41 by psadeghi      #+#    #+#                 */
/*   Updated: 2024/06/10 17:53:40 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>

class ScalarConverter {
	private:
		ScalarConverter(const std::string& literal);

	public:
		~ScalarConverter();
		ScalarConverter(ScalarConverter const & ref);
		ScalarConverter & operator=(ScalarConverter const & ref);
		static void convert(std::string literal);
};

#endif