/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:35:19 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/29 19:16:36 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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

		Fixed & operator=( Fixed const & rhs );

	private:
		int					_val;
		static const int	_fract = 8;
};
std::ostream & operator<<( std::ostream & o , Fixed const & rhs );
