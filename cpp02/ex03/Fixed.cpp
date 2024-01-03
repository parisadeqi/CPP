/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:35:50 by parisasadeq       #+#    #+#             */
/*   Updated: 2024/01/03 16:01:42 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : _fixedPoint(0) {
}

Fixed::Fixed (const int num) : _fixedPoint(num << _fractionalBits) {
}

Fixed::Fixed( const float num ) : _fixedPoint( std::roundf( num * ( 1 << _fractionalBits ) ) ) {
}

Fixed::Fixed (const Fixed& copy) {
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed &var ) {
	if (this != &var) {
		this->_fixedPoint = var.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed () {
};

float	Fixed::toFloat( void ) const {
	return static_cast<float> (this->_fixedPoint) / (1 << this->_fractionalBits);
}

int		Fixed::toInt( void ) const {
	return (this->_fixedPoint >> _fractionalBits);
}

int	Fixed::getRawBits( void ) const {
	return (_fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPoint = raw;
}

std::ostream& operator<<(std::ostream& out, Fixed const &copy) {
	out << copy.toFloat();
	return out;
}


bool	Fixed::operator>(const Fixed& var) {
	return this->getRawBits() > var.getRawBits();
}

bool	Fixed::operator<(const Fixed& var) {
	return this->getRawBits() < var.getRawBits();
}

bool	Fixed::operator>=(const Fixed& var) {
	return this->getRawBits() >= var.getRawBits();
}

bool	Fixed::operator<=(const Fixed& var) {
	return this->getRawBits() <= var.getRawBits();
}

bool	Fixed::operator==(const Fixed& var) {
	return this->getRawBits() == var.getRawBits();
}

bool	Fixed::operator!=(const Fixed& var) {
	return this->getRawBits() != var.getRawBits();
}

Fixed	Fixed::operator+(const Fixed& var) {
	return Fixed(this->toFloat() + var.toFloat());
}

Fixed	Fixed::operator-(const Fixed& var) {
	return Fixed(this->toFloat() - var.toFloat());
}

Fixed	Fixed::operator*(const Fixed& var) {
	return Fixed(this->toFloat() * var.toFloat());
}

Fixed	Fixed::operator/(const Fixed& var) {
	return Fixed(this->toFloat() / var.toFloat());
}

Fixed 	Fixed::operator++ (int) {
	Fixed	temp;
	temp._fixedPoint = this->_fixedPoint++;
	return (temp);
}

Fixed	Fixed::operator++ ( void ) {
	++this->_fixedPoint;
	return (*this);
}

Fixed	Fixed::operator-- (int) {
	Fixed	temp;
	temp._fixedPoint = this->_fixedPoint--;
	return (temp);
}

Fixed	Fixed::operator-- ( void ) {
	--this->_fixedPoint;
	return (*this);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second) {
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second) {
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second) {
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

Fixed& Fixed::min(Fixed& first, Fixed& second) {
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}
