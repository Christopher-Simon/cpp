/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:35:19 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/01 17:02:13 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed( Fixed const & raw);
		Fixed( int const raw );
		Fixed( float const raw );
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed & min(Fixed & lhs, Fixed & rhs);
		static const Fixed & min(Fixed const & lhs, Fixed const & rhs);
		static Fixed & max(Fixed & lhs, Fixed & rhs);
		static const Fixed & max(Fixed const & lhs, Fixed const & rhs);

		Fixed & operator=( Fixed const & rhs );
		Fixed & operator++( void );
		Fixed operator++( int );
		Fixed & operator--( void );
		Fixed operator--( int );
		Fixed & operator-( void );
		bool operator!( void );

		bool operator>( Fixed const & rhs ) const;
		bool operator<( Fixed const & rhs ) const;
		bool operator>=( Fixed const & rhs ) const;
		bool operator<=( Fixed const & rhs ) const;
		bool operator==( Fixed const & rhs ) const;
		bool operator!=( Fixed const & rhs ) const;

		Fixed operator+( Fixed const & rhs ) const;
		Fixed operator-( Fixed const & rhs ) const;
		Fixed operator*( Fixed const & rhs ) const;
		Fixed operator/( Fixed const & rhs ) const;

	private:
		int					_val;
		static const int	_fract = 8;
};

std::ostream & operator<<( std::ostream & o , Fixed const & rhs );

#endif