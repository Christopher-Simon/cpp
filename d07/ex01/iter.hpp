#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <exception>
#include <string>

// template< typename T >
// T	add(T) {
// 	return (T + 5);
// }
template< typename T >
void	iter(T **tab, size_t n) {
	for (size_t i = 0; i < n; i++)
		*tab[i] += 1;
}

#endif