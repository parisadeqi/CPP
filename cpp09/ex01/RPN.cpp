/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:18:38 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/24 12:42:08 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {
	
}

RPN::RPN(const RPN& var) {
	*this = var;
}

RPN::~RPN(void) {

}

RPN& RPN::operator=(const RPN& var) {
	(void)var;
	return *this;
}

bool	RPN::isOperator(const std::string token){
	return token == "+" || token == "-" || token == "*" || token == "/";
}

bool	RPN::isNumber(const std::string token) {
	if (token.size() == 1 && std::isdigit(token[0])) return true;
	return false;
}

int RPN::performOperation(int a, int b, const char op) {
	switch (op)
	{
		case '+':
			return (a + b);
		case '-':
			return (a - b);
		case '*':
			return (a * b);
		case '/':
			return (a / b);
	}
	throw std::runtime_error("Unknown operator");
	return (0);
}

int		RPN::calculateRPN(std::string& expression) {
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token) {
		if (isNumber(token)) {
			_numbers.push(std::stoi(token));
		} else if (isOperator(token)) {
			if (_numbers.size() < 2)
				throw std::runtime_error("Invalid expression");
			int b = _numbers.top();
			_numbers.pop();
			int a = _numbers.top();
			_numbers.pop();
			if (token == "/" && b == 0)
				throw std::runtime_error("Division by zero");
			_numbers.push(performOperation(a, b, token[0]));
		} else {
			throw std::runtime_error("Invalid token");
		}
	}

	if (_numbers.size() != 1)
		throw std::runtime_error("Invalid expression");
	return _numbers.top();
}