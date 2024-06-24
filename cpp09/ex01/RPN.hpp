/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:29:21 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/24 12:24:41 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <cctype>

class RPN {
	private:
		std::stack<int>	_numbers;
	public:
		RPN(void);
		RPN(const RPN& var);
		~RPN(void);
		RPN& operator=(const RPN& var);

		bool	isOperator(const std::string token);
		bool	isNumber(const std::string token);
		int		performOperation(int a, int b, const char op);
		int		calculateRPN(std::string& expression);
};

#endif