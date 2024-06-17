/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:50:15 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/17 14:40:40 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int capacity) : _capacity(capacity) {
	this->_tab.reserve(capacity);
}

Span::Span(const Span &var) : _capacity(var._capacity) {
	*this = var;
}

Span &Span::operator=(const Span& var) {
	if (this != &var) {
		this->_capacity = var._capacity;
		this->_tab = var._tab;
	}
	return *this;
}

Span::~Span(void) {}

void Span::addNumber(int i) {
	if (this->_tab.size() == this->_capacity)
		throw Span::fullSpanException();
	this->_tab.push_back(i);
}

void Span::addNumber(std::vector<int> vect) {
	if (this->_tab.size() + vect.size() > this->_capacity)
		throw Span::fullSpanException();
	this->_tab.insert(this->_tab.end(), vect.begin(), vect.end());
}


int Span::shortestSpan(void) {
	std::vector<int> temp;

	if (this->_tab.size() < 2)
		throw Span::noSpanException();
	temp = this->_tab;
	std::sort(temp.begin(), temp.end());
	int shortest = std::numeric_limits<int>::max();
	for (std::size_t i = 1; i < temp.size(); ++i) {
		int span = temp[i] - temp[i - 1];
		if (span < shortest) {
			shortest = span;
		}
	}

	return shortest;
}


int Span::longestSpan(void) {
	std::vector<int> temp;

	if (this->_tab.size() < 2)
		throw Span::noSpanException();

	int min = *std::min_element(_tab.begin(), _tab.end());
	int max = *std::max_element(_tab.begin(), _tab.end());

	return max - min;
}