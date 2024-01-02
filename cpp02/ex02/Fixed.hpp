/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadeghi <psadeghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:23:16 by parisasadeq       #+#    #+#             */
/*   Updated: 2024/01/02 17:40:35 by psadeghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {
	private:
		int	_fixedPoint;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int nbr);
		Fixed( const float num );
		Fixed (const Fixed& copy);
		Fixed& operator=(const Fixed& var);
		bool operator>(const Fixed& var);
		bool operator<(const Fixed& var);
		bool operator>=(const Fixed& var);
		bool operator<=(const Fixed& var);
		bool operator==(const Fixed& var);
		bool operator!=(const Fixed& var);
		Fixed operator+(const Fixed& var);
		Fixed operator-(const Fixed& var);
		Fixed operator*(const Fixed& var);
		Fixed operator/(const Fixed& var);
		Fixed& min(Fixed& first, Fixed& second);
		const Fixed& min(const Fixed& first, const Fixed& second);
		Fixed& max(Fixed& first, Fixed& second);
		const Fixed& max(const Fixed& first, const Fixed& second);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const &copy);

#endif