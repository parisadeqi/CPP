/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:16:25 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/04 14:59:59 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){
	
}

Point::Point(const float firstFloat, const float secondFloat): _x(firstFloat), _y(secondFloat) {
	
}


Point::Point(const Point& copy): _x(copy._x), _y(copy._y) {

}

Point::~Point() {
	
}

Point&	Point::operator=(const Point& var) {
	if (this != &var)
	{
		( Fixed ) this->_x = var.getX();
		( Fixed ) this->_y = var.getY();
	}
	return (*this);
}

Fixed	Point::getX( void ) const {
	return (this->_x);
}

Fixed	Point::getY( void ) const {
	return (this->_y);
}

// Fixed Point::sign (Point a, Point b, Point c) {
// 	return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
// }