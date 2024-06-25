/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:11:43 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/25 14:49:48 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename Container>
void print_container(const Container& container) {
	for (const auto& elem : container) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;
}

PmergeMe::PmergeMe(int argc, char** argv)
{
	int								n;
	std::deque<int>::const_iterator	it;
	std::deque<int>::const_iterator	ite;
	std::deque<int>::const_iterator	itf;
	
	if (argc == 1)
		throw std::invalid_argument("Not the correct amout of variable!");
	for (int i = 1; i < argc; i++)
	{
		n = stoi(static_cast<std::string>(argv[i]));
		if (n < 0)
			throw std::invalid_argument("we cannot take negative numbers!");
		_listSeq.push_back(n);
		_dequeSeq.push_back(n);
	}
	ite = _dequeSeq.end();
	for(it = _dequeSeq.begin(); it != ite; it++)
	{
		itf = find(it + 1, ite, *it);
		if (itf != ite)
			throw std::invalid_argument("Duplication Error");
	}
}

PmergeMe::PmergeMe(const PmergeMe& var)
{
	*this = var;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& var)
{
	_dequeSeq = var._dequeSeq;
	_listSeq = var._listSeq;
	return (*this);
}

PmergeMe::~PmergeMe(void)
{
}

void PmergeMe::sortPairsList(void) {
	std::list<std::pair<int, int>>::const_iterator	it;
	std::list<std::pair<int, int>>::const_iterator	ite;

	while(_listSeq.size() > 1)
	{
		std::pair<int, int> pair;
		pair.first = _listSeq.front();
		_listSeq.pop_front();
		pair.second = _listSeq.front();
		_listSeq.pop_front();
		if (pair.first < pair.second)
			std::swap(pair.first, pair.second);
		_listPairs.push_back(pair);
	}
	_listPairs.sort();

	ite = _listPairs.end();
	for(it = _listPairs.begin(); it != ite; it++)
	{
		_listA.push_back(it->first);
		_listB.push_back(it->second);
	}
	if (!_listSeq.empty()) {
		_listB.push_back(_listSeq.front());
		_listSeq.pop_front();
	}
}

void PmergeMe::insertList(std::list<int>::iterator it, int value) {
	// Insert value at correct position to maintain sorted order
	if (it == _listSeq.begin()) {
		_listSeq.insert(it, value);
		return;
	}
	--it;
	if (value > *it) {
		++it;
		_listSeq.insert(it, value);
	} else {
		insertList(it, value);
	}
}

int PmergeMe::nextNumberList(int number) {
	if (number - 1 <= _oldJacob) {
		if (_jacob >= static_cast<int>(_listB.size()))
			return -1;
		
		int tmp = _jacob;
		_jacob = _jacob + 2 * _oldJacob;
		_oldJacob = tmp;
		number = _jacob;

		while (number > static_cast<int>(_listB.size()))
			number--;
		return number;
	}
	return number - 1;
}

void PmergeMe::sortList() {
	if (_listSeq.size() <= 1)
		return;

	// Step 2: Sort pairs
	sortPairsList();
	std::cout << "we are after this." << std::endl;
	_listSeq = _listA;  // Initialize _listSeq with lstA

	_jacob = 1;
	_oldJacob = 1;
	int number = 1;
	while (number != -1) {
		auto itPairs = _listPairs.begin();
		std::advance(itPairs, number);

		if (itPairs == _listPairs.end()) {
			insertList(_listSeq.end(), _listB.back());
		} else {
			auto itSeq = std::find(_listSeq.begin(), _listSeq.end(), itPairs->first);
			insertList(itSeq, itPairs->second);
		}
		
		number = nextNumberList(number);
	}
}

void PmergeMe::sortPairsDeque(void) {
	std::deque<std::pair<int, int>>::const_iterator	it;
	std::deque<std::pair<int, int>>::const_iterator	ite;
	while(_dequeSeq.size() > 1)
	{
		std::pair<int, int> pair;
		pair.first = _dequeSeq.front();
		_dequeSeq.pop_front();
		pair.second = _dequeSeq.front();
		_dequeSeq.pop_front();
		if (pair.first < pair.second)
			std::swap(pair.first, pair.second);
		_dequePairs.push_back(pair);
	}
	sort(_dequePairs.begin(), _dequePairs.end());

	ite = _dequePairs.end();
	for(it = _dequePairs.begin(); it != ite; it++)
	{
		_dequeA.push_back(it->first);
		_dequeB.push_back(it->second);
	}
	if (!_dequeSeq.empty()) {
		_dequeB.push_back(_dequeSeq.front());
		_dequeSeq.pop_front();
	}
}

void PmergeMe::insertDeque(std::deque<int>::iterator it, int value) {
	// Insert value at correct position to maintain sorted order
	if (it == _dequeSeq.begin()) {
		_dequeSeq.insert(it, value);
		return;
	}
	--it;
	if (value > *it) {
		++it;
		_dequeSeq.insert(it, value);
	} else {
		insertDeque(it, value);
	}
}

int PmergeMe::nextNumberDeque(int number) {
	if (number - 1 <= _oldJacob) {
		if (_jacob >= static_cast<int>(_dequeB.size()))
			return -1;
		
		int tmp = _jacob;
		_jacob = _jacob + 2 * _oldJacob;
		_oldJacob = tmp;
		number = _jacob;

		while (number > static_cast<int>(_dequeB.size()))
			number--;
		return number;
	}
	return number - 1;
}

void PmergeMe::sortDeque() {
	std::deque<int>::iterator	it;
	int							index;
	int							number;

	if (_dequeSeq.size() == 1)
		return ;
	sortPairsDeque();
	_dequeSeq = _dequeA;

	_oldJacob = 1;
	_jacob = 1;
	number = 1;
	while (number != -1)
	{
		index = number - 1;
		if (_dequeB[index] == _dequeB.back() && _dequeB.size() > _dequeA.size())
			it = _dequeSeq.end();
		else
			it = find(_dequeSeq.begin(), _dequeSeq.end(), _dequeA[index]);
		insertDeque(it, _dequeB[index]);
		number = nextNumberDeque(number);
		
	}
}

void PmergeMe::printSequence() const {
	print_container(_dequeSeq);
}