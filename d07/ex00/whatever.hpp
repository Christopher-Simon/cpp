/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:33:59 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/10 16:45:57 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <exception>
#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

template< typename T >
T const & max(T const & x, T const & y) {
return (x >= y ? x : y);
}
template< typename T >
T const & min(T const & x, T const & y) {
	return (x <= y ? x : y);
}
template< typename T >
void swap(T & x, T & y) {
	T tmp;

	tmp = y;
	y = x;
	x = tmp;
}

// class Awesome
// {
// 	public:
// 		Awesome(void): _n(0) {}
// 		Awesome(int n): _n(n) {}
// 		Awesome & operator=(Awesome & a) {_n = a._n; return *this; }
// 		bool operator==(Awesome const & rhs) const { return (this->_n == rhs._n); }
// 		bool operator!=(Awesome const & rhs) const { return (this->_n != rhs._n); }
// 		bool operator>(Awesome const & rhs) const { return (this->_n > rhs._n); }
// 		bool operator<(Awesome const & rhs) const { return (this->_n < rhs._n); }
// 		bool operator>=(Awesome const & rhs) const { return (this->_n >= rhs._n); }
// 		bool operator<=(Awesome const & rhs) const { return (this->_n <= rhs._n); }
// 		int get_n() const {return _n;}
// 	private:
// 		int _n;
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a){o << a.get_n(); return o;};

#endif