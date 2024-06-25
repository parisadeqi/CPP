/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:14:17 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/25 14:49:58 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <iterator>
# include <deque>

class PmergeMe {
	private:
		int								_oldJacob;
		int								_jacob;
		std::list<int>					_listSeq;
		std::list<int>					_listA;
		std::list<int>					_listB;
		std::list<std::pair<int, int>>	_listPairs;
		std::deque<int>					_dequeSeq;
		std::deque<int>					_dequeA;
		std::deque<int>					_dequeB;
		std::deque<std::pair<int, int>>	_dequePairs;
		void								sortPairsList(void);
		int									nextNumberList(int number);
		void								insertList(std::list<int>::iterator it, int value);

		int									nextNumberDeque(int number);
		void								insertDeque(std::deque<int>::iterator it, int value);
		void								sortPairsDeque(void);

	public:
		PmergeMe(int argc, char**argv);
		PmergeMe(const PmergeMe& var);
		~PmergeMe(void);
		PmergeMe&							operator=(const PmergeMe& var);
		void								sortList(void);
		void								sortDeque(void);

		void 								printSequence() const;
};

#endif