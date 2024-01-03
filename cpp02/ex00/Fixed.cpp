/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:35:50 by parisasadeq       #+#    #+#             */
/*   Updated: 2024/01/02 12:14:33 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : _fixedPoint(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed &copy ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy) {
		this->_fixedPoint = copy.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed () {
	std::cout << "Deconstructor called" << std::endl;
};

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPoint = raw;
}