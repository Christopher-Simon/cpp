/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:30:56 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/10 16:46:04 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	std::cout << std::endl << GREEN << "test int" << RESET << std::endl;
	{
		int	a = 21;
		int	b = 42;
		std::cout << "max<int>(a,b)" << std::endl;
		std::cout << max<int>(a,b) << std::endl;
		std::cout << "max(a,b)" << std::endl;
		std::cout << max(a,b) << std::endl;
		std::cout << "min<int>(a,b)" << std::endl;
		std::cout << min<int>(a,b) << std::endl;
		std::cout << "min(a,b)" << std::endl;
		std::cout << min(a,b) << std::endl;
		std::cout << "a : " << a << " b : " << b << std::endl;
		std::cout << "swap(a,b)" << std::endl;
		swap(a,b);
		std::cout << "a : " << a << " b : " << b << std::endl;
	}
	std::cout << std::endl << GREEN << "test char" << RESET << std::endl;
	{
		char	a = 'a';
		char	b = 'b';
		std::cout << "max<char>(a,b)" << std::endl;
		std::cout << max<char>(a,b) << std::endl;
		std::cout << "max(a,b)" << std::endl;
		std::cout << max(a,b) << std::endl;
		std::cout << "min<char>(a,b)" << std::endl;
		std::cout << min<char>(a,b) << std::endl;
		std::cout << "min(a,b)" << std::endl;
		std::cout << min(a,b) << std::endl;
		std::cout << "a : " << a << " b : " << b << std::endl;
		std::cout << "swap(a,b)" << std::endl;
		swap(a,b);
		std::cout << "a : " << a << " b : " << b << std::endl;
	}
	// std::cout << std::endl << GREEN << "test Awesome" << RESET << std::endl;
	// {
	// 	Awesome a(2), b(4);
	// 	swap(a,b);
	// 	std::cout << "max<Awesome>(a,b)" << std::endl;
	// 	std::cout << max<Awesome>(a,b) << std::endl;
	// 	std::cout << "max(a,b)" << std::endl;
	// 	std::cout << max(a,b) << std::endl;
	// 	std::cout << "min<Awesome>(a,b)" << std::endl;
	// 	std::cout << min<Awesome>(a,b) << std::endl;
	// 	std::cout << "min(a,b)" << std::endl;
	// 	std::cout << min(a,b) << std::endl;
	// 	std::cout << "a : " << a << " b : " << b << std::endl;
	// 	std::cout << "swap(a,b)" << std::endl;
	// 	swap(a,b);
	// 	std::cout << "a : " << a << " b : " << b << std::endl;
	// }
}