/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:14:15 by christopher       #+#    #+#             */
/*   Updated: 2022/12/15 12:45:34 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <inttypes.h>

int	main(void)
{
	int a = 42;
	int * b = &a;
	uintptr_t c = reinterpret_cast<uintptr_t>(a);
	std::cout << c << std::endl;
	std::cout << *c << std::endl;
	return (0);
}