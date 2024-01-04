/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:46:20 by parisasadeq       #+#    #+#             */
/*   Updated: 2024/01/04 15:00:44 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>


int main ( void ) {
	if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15) ) == true ) {
		std::cout << "Point is in the triangle" << std::endl;
	} else {
		std::cout << "Point is not in the triangle" << std::endl;
	}
	return 0;
}