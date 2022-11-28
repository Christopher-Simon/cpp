/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:56:16 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/24 19:01:41 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void){
	Weapon	club("Club");
	HumanA	bob("bob", club);
	HumanB	jon("Jon");

	bob.attack();
	club.setType("zizi");
	bob.attack();
	jon.attack();
	jon.setWeapon(club);
	jon.attack();
	// {
	// 	Weapon club = Weapon("crude spiked club");
	// 	HumanA bob("Bob", club);
	// 	bob.attack();
	// 	club.setType("some other type of club");
	// 	bob.attack();
	// }
	// std::cout << std::endl;
	// {
	// 	Weapon club = Weapon("crude spiked club");
	// 	HumanB jim("Jim");
	// 	jim.setWeapon(club);
	// 	jim.attack();
	// 	club.setType("some other type of club");
	// 	jim.attack();
	// }
	return (0);
}