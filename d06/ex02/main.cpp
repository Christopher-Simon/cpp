/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:06:03 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/16 17:48:23 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
// #include "A.hpp"
// #include "B.hpp"
// #include "C.hpp"
#include <cstdlib>
#include <ctime>
#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define PURPLE	"\033[35m"
#define RESET	"\033[0m"

int	main(void)
{
	Base	base;
	Base	*ptr;

	srand(time(NULL));
	ptr = base.generate();
	std::cout << YELLOW << "Base ptr :" << RESET << std::endl;
	base.identify(ptr);
	std::cout << YELLOW << "Base ref :" << RESET << std::endl;
	base.identify(*ptr);
	std::cout << YELLOW << "Base &base :" << RESET << std::endl;
	base.identify(&base);
	delete ptr;
	return (0);
}