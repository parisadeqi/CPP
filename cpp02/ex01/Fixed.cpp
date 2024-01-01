/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: parisasadeqi <parisasadeqi@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 13:35:50 by parisasadeq   #+#    #+#                 */
/*   Updated: 2023/12/27 12:07:49 by parisasadeq   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : _fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const int num) : _fixedPoint(num << _fractionalBits) {
		std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float num ) : _fixedPointValue( std::roundf( num * ( 1 << _fractionalBits ) ) ) {
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

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}
