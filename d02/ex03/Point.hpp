/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:19:42 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/01 16:46:27 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
# define	POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(Point const & copy);
		Point( const float x, const float y );
		~Point();

		Fixed const getX() const;
		Fixed const getY() const;

		void printPoint() const;
		
		Point & operator=(Point const & rhs);
		bool operator==(Point const & rhs) const;

	private:
		Fixed const _x;
		Fixed const _y;
};

#endif
