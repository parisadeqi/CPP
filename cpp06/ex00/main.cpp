/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:31:32 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/05 11:34:33 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>


int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "You should pass have only 1 argument!" << std::endl;
		return -1;
	}

	std::cout << typeid(argv[1]).name() << std::endl;

	return 0;
}