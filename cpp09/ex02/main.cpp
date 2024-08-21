/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:04:53 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/28 14:42:47 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>

int	main(int argc, char** argv)
{
	try
	{
		PmergeMe	pmergeme(argc, argv);


		clock_t lstStart = clock();
		pmergeme.sortList();
		clock_t lstEnd = clock();
		double listTime =
			static_cast<double>(lstEnd - lstStart) / CLOCKS_PER_SEC * 1000;
	
		std::cout << "Before\t";
		pmergeme.printSequence();
		std::cout << std::endl;
		clock_t dequeStart = clock();
		pmergeme.sortDeque();
		clock_t dequeEnd = clock();
		double dequeTime =
			static_cast<double>(dequeEnd - dequeStart) / CLOCKS_PER_SEC * 1000;
		std::cout << "After\t";
		pmergeme.printSequence();
		std::cout << std::endl;
	
		std::cout << std::endl;
		std::cout << "Time to process a range of " << argc - 1;
		std::cout << " elements with std::deque:\t" << dequeTime << " us";
		std::cout << std::endl;
		std::cout << "Time to process a range of " << argc - 1;
		std::cout << " elements with std::list:\t" << listTime << " us";
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
