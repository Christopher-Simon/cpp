/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:35:19 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/29 18:53:09 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed( Fixed const & raw);
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed & operator=( Fixed const & rhs );

	private:
		int					_val;
		static const int	_fract = 8;
};
