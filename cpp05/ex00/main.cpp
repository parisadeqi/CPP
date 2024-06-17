/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:23:48 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/03 11:47:32 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void) {
	try
	{
		Bureaucrat b("Bureaucrat", 1);
		try
		{
			b.increamentGrade();
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << b << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Grade out of range " << e.what() << std::endl;
	}

	return (0);
}