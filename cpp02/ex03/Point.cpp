/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:16:25 by psadeghi          #+#    #+#             */
/*   Updated: 2024/01/03 16:50:34 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){
	
}

Point::Point(const float firstFloat, const float secondFloat): x(firstFloat), y(secondFloat) {
	
}


Point::Point(Point& copy) {
	*this = copy;
}

Point::~Point() {
	
}

Point&	Point::operator=(const Point& var) {

}