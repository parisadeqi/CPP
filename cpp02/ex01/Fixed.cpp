/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:35:50 by parisasadeq       #+#    #+#             */
/*   Updated: 2024/01/02 13:00:17 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : _fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const int num) : _fixedPoint(num << _fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float num ) : _fixedPoint( std::roundf( num * ( 1 << _fractionalBits ) ) ) {
	std::cout << "Float constructor called" << std::endl;
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

float	Fixed::toFloat( void ) const {
	return static_cast<float> (this->_fixedPoint) / (1 << this->_fractionalBits);
}

int		Fixed::toInt( void ) const {
	return (this->_fixedPoint >> _fractionalBits);
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPoint = raw;
}

std::ostream& operator<<(std::ostream& out, Fixed const &copy) {
	out << copy.toFloat();
	return out;
	
}