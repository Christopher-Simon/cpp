/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:44:42 by christopher       #+#    #+#             */
/*   Updated: 2023/01/11 17:28:01 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Uncorrect amount of argument" << std::endl;
		return (1);
	}
	(void) argv;
	std::string res = argv[1];
	Caster Cast(res);
	return (1);
}
