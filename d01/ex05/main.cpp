/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:33:01 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/28 17:38:55 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl().complain("ok");
	Harl().complain("ERRROR");
	Harl().complain("DEBUG");
	Harl().complain("INFO");
	Harl().complain("WARNING");
	Harl().complain("WARNINGG");
	Harl().complain(std::string("ERROR"));
	Harl().complain("");
	
	return (0);
}