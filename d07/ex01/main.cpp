/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:17:05 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/09 15:27:07 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void	add(const T & nb) {
	std::cout << static_cast<T>(nb + 5) << std::endl;
}

// class Awesome
// {
// 	public: 
// 		Awesome() : _n(42) {return;}
// 		int get(void) const {return ( this->_n);}
// 	private : 
// 		int _n;
// };

// std::ostream & operator<<(std::ostream & o, Awesome const & rhs)
// {
// 	o << rhs.get();
// 	return o;
// }

// template< typename T >
// void	print(const T & x) {
// 	std::cout << x << std::endl;
// }

// int	main(void)
// {
// 	int tab[] = {0,1,2,3,4};

// 	Awesome	tab2[5];
// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);
// }

int	main(void)
{
	std::cout << std::endl << GREEN << "Test tab int" << RESET << std::endl;
	{
		int	tab[] = {4,3,2,1,0};
		size_t tabSize = sizeof(tab) / sizeof(tab[0]); 
		iter(tab, tabSize, add);
		std::cout << tab[0] << std::endl;
	}
	std::cout << std::endl << GREEN << "Test tab char" << RESET << std::endl;
	{
		char tab[] = "abcdef";
		size_t tabSize = sizeof(tab) / sizeof(tab[0]); 
		iter(tab, tabSize, add);
		add(tab[0]);
		std::cout << tab << std::endl;
	}
	return (0);
}
