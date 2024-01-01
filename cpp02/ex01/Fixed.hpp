/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: parisasadeqi <parisasadeqi@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 13:23:16 by parisasadeq   #+#    #+#                 */
/*   Updated: 2023/12/27 12:08:12 by parisasadeq   ########   odam.nl         */
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
		Fixed& operator = (const Fixed& copy);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif