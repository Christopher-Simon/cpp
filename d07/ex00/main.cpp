/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:30:56 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/09 11:14:42 by chsimon          ###   ########.fr       */
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
	}
	std::cout << std::endl << GREEN << "test char *" << RESET << std::endl;
	{
		char a[] = "bita";
		char b[] = "bitb";
		std::cout << "max<char *>(a,b)" << std::endl;
		std::cout << max<char *>(a,b) << std::endl;
		std::cout << "max(a,b)" << std::endl;
		std::cout << max(a,b) << std::endl;
		std::cout << "min<char *>(a,b)" << std::endl;
		std::cout << min<char *>(a,b) << std::endl;
		std::cout << "min(a,b)" << std::endl;
		std::cout << min(a,b) << std::endl;
	}
}