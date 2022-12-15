/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:51:03 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/15 18:02:12 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <cstdint>
#include "Data.hpp"

int	main(void)
{
	uintptr_t d;
	Data Test;
	Test.x = 42;
	Test.y = 45;

	Data *a = &Test;
	Data *Classic_ptr;
	Data *by_struct_ptr;
	Data Classic;
	Data by_struct;

	d = reinterpret_cast<uintptr_t>(a);
	std::cout << d << std::endl;
	d = Test.serialize(&Test);
	std::cout << d << std::endl;
	Classic_ptr = reinterpret_cast<Data *>(d);
	by_struct_ptr = reinterpret_cast<Data *>(d);
	Classic = *Classic_ptr;
	by_struct = *by_struct_ptr;
	std::cout << Classic.x << std::endl;
	std::cout << by_struct.x << std::endl;
	return (0);
}
