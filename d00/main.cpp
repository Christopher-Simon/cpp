/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:44:23 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/15 19:06:28 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <iostream>

#define	endline "\n"

int	test = 1;

namespace	Foo {
	int	test = 3;
	int	f(int d) { return (d);};
}

namespace	Oui = Foo;

int	main(void)
{
	char buf[10];
	
	// std::cout << buf;
	std::cout << "Hello, world!" << std::endl;
	std::cin >> buf;
	std::cout << buf << std::endl;
	std::cout << "[" << test << "]" << std::endl;
	std::cout << "[" << Foo::test << "]" << endline;
	std::cout << "[" << Foo::f(5) << "]" << std::endl;
	std::cout << "[" << Oui::f(5) << "]" << std::endl;
	return (0);
}