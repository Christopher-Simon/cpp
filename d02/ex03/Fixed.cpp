/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:35:52 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/12 12:45:39 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _val(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & raw) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = raw;
}

double	ft_pow(double x, double y) {
	double	pow;

	pow = 1;
	for (size_t i(0); i < y; i++) {
		pow *= x;
	}
	return (pow);
}

Fixed::Fixed(int const raw){
	int	max_fixed(ft_pow(2, (31 - _fract)));

	if (raw >= max_fixed || raw <= (max_fixed * -1) - 1)
		std::cout << raw << " : This value might be overflowed" << std::endl;
	// std::cout << "Int constructor called" << std::endl;
	this->_val = raw * (1 << 8);
}

Fixed::Fixed(float const raw){
	int	max_fixed(ft_pow(2, (31 - _fract)));

	if (raw >= max_fixed || raw <= (max_fixed * -1) - 1)
		std::cout << raw << " : This value might be overflowed" << std::endl;
	// std::cout << "Double constructor called" << std::endl;
	this->_val = round(raw * (1 << 8));
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return	(this->_val);
}

void Fixed::setRawBits( int const raw ) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

float Fixed::toFloat( void ) const {
	return ((float)getRawBits() / (float)(1<<8));
}

int	Fixed::toInt( void ) const {
	return (this->_val / (1<<8));
}

Fixed & Fixed::min(Fixed & lhs, Fixed & rhs) {
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

const Fixed & Fixed::min(Fixed const & lhs, Fixed const & rhs) {
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed & Fixed::max(Fixed & lhs, Fixed & rhs) {
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const Fixed & Fixed::max(Fixed const & lhs, Fixed const & rhs) {
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}


Fixed &	Fixed::operator=(Fixed const & rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_val = rhs.getRawBits();
	return (*this);
}

Fixed & Fixed::operator++( void ) { 
	this->_val++;
	return (*this);
}

Fixed Fixed::operator++( int ) { 
	Fixed	tmp(*this);

	this->_val++;
	return (tmp.toFloat());
}

Fixed & Fixed::operator--( void ) { 
	this->_val--;
	return (*this);
}

Fixed Fixed::operator--( int ) { 
	Fixed	tmp(*this);

	this->_val--;
	return (tmp.toFloat());
}

Fixed & Fixed::operator-( void ) {
	this->_val *= -1;
	return (*this);
}

bool Fixed::operator!( void ) {
	if (!this->_val)
		return (true);
	return (false);
}

bool Fixed::operator>( Fixed const & rhs ) const {
	if (this->toFloat() > rhs.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator<( Fixed const & rhs ) const {
	if (this->toFloat() < rhs.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator>=( Fixed const & rhs ) const {
	if (this->toFloat() >= rhs.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator<=( Fixed const & rhs ) const {
	if (this->toFloat() <= rhs.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator==( Fixed const & rhs ) const {
	if (this->toFloat() == rhs.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator!=( Fixed const & rhs ) const {
	if (this->toFloat() != rhs.toFloat())
		return (true);
	return (false);
}

Fixed Fixed::operator+( Fixed const & rhs ) const {
	return(Fixed(this->toFloat() + rhs.toFloat())); 
}

Fixed Fixed::operator-( Fixed const & rhs ) const {
	return(Fixed(this->toFloat() - rhs.toFloat())); 
}

Fixed Fixed::operator*( Fixed const & rhs ) const {
	return(Fixed(this->toFloat() * rhs.toFloat())); 
}

Fixed Fixed::operator/( Fixed const & rhs ) const {
	return(Fixed(this->toFloat() / rhs.toFloat())); 
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return (o);
}