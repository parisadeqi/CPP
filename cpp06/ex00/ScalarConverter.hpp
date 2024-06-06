/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:09:41 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/05 11:31:18 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

// Convert to two things:
// 		char: Non displayable
// 		int: 0
// 		float: 0.0f
// 		double: 0.0

class ScalarConverter {
	public:
		ScalarConverter(std::string const arg1);
		~ScalarConverter();
		ScalarConverter(ScalarConverter const & ref);
		ScalarConverter & operator=(ScalarConverter const & ref);
}

#endif