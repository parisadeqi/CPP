/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:14:43 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/04 14:59:05 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	Point();
	Point(const float firstFloat, const float secondFloat);
	Point(const Point& copy);
	~Point();
	Point& operator=(const Point& var);
	Fixed getX( void ) const;
	Fixed getY( void ) const;
	//static Fixed sign (Point a, Point b, Point c);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif