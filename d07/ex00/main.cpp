/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:30:56 by chsimon           #+#    #+#             */
/*   Updated: 2023/01/06 18:31:19 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	int	a = 21;
	int	b = 42;
	std::cout << "max<int>(a,b)" << std::endl;
	std::cout << max<int>(a,b) << std::endl;
	std::cout << "max(a,b)" << std::endl;
	std::cout << max(a,b) << std::endl;
}