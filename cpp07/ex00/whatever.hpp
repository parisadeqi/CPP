/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:43:43 by psadeghi          #+#    #+#             */
/*   Updated: 2024/06/11 15:55:41 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b) {
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(T const &a, T const &b) {
	if (a < b)
		return a;
	else
		return b;
}

template<typename T>
T max(T const &a, T const &b) {
	if (a > b)
		return a;
	else
		return b;
}

#endif