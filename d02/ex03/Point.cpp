/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:28:15 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/01 16:49:34 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ):_x(0), _y(0) {
}

Point::Point( const float x, const float y ):_x(x), _y(y) {
}

Point::Point(Point const & copy): _x(copy.getX()), _y(copy.getY()) {
}

Point::~Point( void ) {	
}

Fixed const Point::getX() const {
	return (this->_x);
}

Fixed const Point::getY() const {
	return (this->_y);
}

void	Point::printPoint() const {
	std::cout << "(" << this->getX() << "," 
	<< this->getY() << ")" << std::endl;
}

bool Point::operator==(Point const & rhs) const{
	if (this->getX() == rhs.getX() && this->getY() == rhs.getY())
		return (true);
	return (false);
}


Point & Point::operator=(Point const & rhs) {
	(void)rhs;
	std::cout << "les attributs sont const, donc c'est pas possible" << std::endl;
	return (*this);
}
