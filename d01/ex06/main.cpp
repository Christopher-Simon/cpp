/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:33:01 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/28 18:07:30 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	std::string	sale[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	if (argc != 2)
	{
		std::cerr << "Wrong argument number" << std::endl;
		return (0);
	}
	int i = 0;
	for (; i < 4; i++) { 
		if (!sale[i].compare(argv[1]))
			break ;
	}
	switch (i)
	{
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case 0:
			Harl().complain("DEBUG");
			// fall through
		case 1:
			Harl().complain("INFO");
			// fall through
		case 2:
			Harl().complain("WARNING");
			// fall through
		case 3:
			Harl().complain("ERROR");
			// fall through
	}
	return (0);
}
