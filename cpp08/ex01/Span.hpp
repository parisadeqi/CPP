/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:54:53 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/17 14:15:49 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <list>
# include <iterator>
# include <vector>
# include <array>
# include <limits>

class Span {
	private:
		std::vector<int> _tab;
		unsigned int	_capacity;

	public:
		Span(unsigned int capacity);
		Span(const Span &var);
		Span &operator=(const Span &var);
		~Span(void);

		void	addNumber(int i);
		void	addNumber(std::vector<int> vect);
		int		shortestSpan(void);
		int		longestSpan(void);
	
		class fullSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("Span: Out of space in vector");
				}
		};

		class noSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("Span: There is not enought elements in vector");
				}
		};
};

#endif