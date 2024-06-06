/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:31:32 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/06 17:17:23 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv)
{
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <literal>" << std::endl;
		return 1;
	}

	ScalarConverter::convert(argv[1]);
	return 0;
}