/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:33:01 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 13:16:24 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void) {
	std::cout << GREEN << "input : ok" << RESET << std::endl;
	Harl().complain("ok");
	std::cout << GREEN << "input : ERRROR" << RESET << std::endl;
	Harl().complain("ERRROR");
	std::cout << GREEN << "input : DEBUG" << RESET << std::endl;
	Harl().complain("DEBUG");
	std::cout << GREEN << "input : INFO" << RESET << std::endl;
	Harl().complain("INFO");
	std::cout << GREEN << "input : WARNING" << RESET << std::endl;
	Harl().complain("WARNING");
	std::cout << GREEN << "input : WARNINGG" << RESET << std::endl;
	Harl().complain("WARNINGG");
	std::cout << GREEN << "input : ERROR" << RESET << std::endl;
	Harl().complain(std::string("ERROR"));
	std::cout << GREEN << "input : \"\"" << RESET << std::endl;
	Harl().complain("");
	
	return (0);
}