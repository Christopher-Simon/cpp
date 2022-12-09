/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:56:16 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/09 14:10:05 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void){
	std::cout << RED << "______Test 1______" << RESET << std::endl;
	std::cout << std::endl;
	{
		Weapon	club("Club");
		HumanA	Bob("Bob", club);
		HumanB	jon("Jon");

		std::cout << GREEN << "Human A (Weapon REF)" << RESET << std::endl;
		Bob.attack();
		club.setType("Xavier Niel");
		Bob.attack();
		std::cout << GREEN << "Human B (Weapon PTR)" << RESET << std::endl;
		jon.attack();
		jon.setWeapon(club);
		jon.attack();
	}
	std::cout << std::endl << RED << "______Test 2______ Autre écriture" << RESET << std::endl;
	std::cout << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl << RED << "______Test 3______ Del Weapon" << RESET << std::endl;
	std::cout << std::endl;
	{
		Weapon *club = new Weapon("crude spiked club");
		HumanB bob("Bob");
		bob.attack();
		club->setType("some other type of club");
		bob.attack();
		delete club;
	}
	return (0);
}