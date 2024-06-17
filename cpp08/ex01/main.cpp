/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:56:36 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/17 14:40:13 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try {
		sp.addNumber(20);
	} catch (const Span::fullSpanException& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;  // Expected output: Span: Out of space in vector
	}

	Span sp2(3);
	sp2.addNumber(1);

	// Attempt to get span with not enough elements
	try {
		std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
	} catch (const Span::noSpanException& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;  // Expected output: Span: There is not enough elements in vector
	}

	std::vector<int> vec = {5, 10, 15};
	Span sp3(10);
	sp3.addNumber(vec);
	std::cout << "Shortest Span: " << sp3.shortestSpan() << std::endl;  // Expected output: 5
	std::cout << "Longest Span: " << sp3.longestSpan() << std::endl;  // Expected output: 10
	return 0;
}