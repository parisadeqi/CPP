/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:39:20 by parisasadeq       #+#    #+#             */
/*   Updated: 2024/06/18 12:02:55 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "The MutantStack" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
	std::cout << "The list" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);

	std::list<int>::iterator iter = lstack.begin();
	std::list<int>::iterator itere = lstack.end();
	++iter;
	--iter;
	while (iter != itere) {
		std::cout << *iter << std::endl;
		++iter;
	}
	return 0;
}
