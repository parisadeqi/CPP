/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:14:43 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/03 16:27:02 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
private:
	/* data */
	Fixed const	x;
	Fixed const	y;
public:
	Point();
	Point(const float firstFloat, const float secondFloat);
	Point(Point& copy);
	~Point();

	Point& operator=(const Point& var);
};

#endif