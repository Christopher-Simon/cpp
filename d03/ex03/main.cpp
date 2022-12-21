/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:11:33 by christopher       #+#    #+#             */
/*   Updated: 2022/12/14 19:18:53 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void)
{
	std::cout << std::endl;
	std::cout << std::endl << YELLOW << "Test Solo Diam's" << RESET << std::endl;
	{
		DiamondTrap	Test("Diamond");
		std::cout << std::endl;
		Test.whoAmI();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl << YELLOW << "Test canoniques" << RESET << std::endl;
	{
		DiamondTrap	Test;
		DiamondTrap	John("John");

		std::cout << Test << std::endl;
		Test.takeDamage(5);
		DiamondTrap	Copy(Test);
		std::cout << Test << std::endl;
		std::cout << Copy << std::endl;
		std::cout << std::endl;

		std::cout << John << std::endl;
		John = Copy;
		std::cout << John << std::endl;
		std::cout << Copy << std::endl;
		Copy.takeDamage(5);
		std::cout << John << std::endl;
		std::cout << Copy << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl << YELLOW << "Test diff attack" << RESET << std::endl;
	{
		ClapTrap	Clappy("Clappy");
		ScavTrap	Scavy("Scavy");
		FragTrap	Fraggy("Fraggy");
		DiamondTrap	Diamy("Diamy");

		std::cout << std::endl;
		Clappy.attack("test");
		Scavy.attack("test");
		Fraggy.attack("test");
		Diamy.attack("test");
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl << YELLOW << "Print values" << RESET << std::endl;
	{
		ClapTrap	Clappy("Clappy");
		ScavTrap	Scavy("Scavy");
		FragTrap	Fraggy("Fraggy");
		DiamondTrap	Diamy("Diamy");
		
		std::cout << std::endl;
		std::cout << Clappy << RESET << std::endl;
		std::cout << Scavy << RESET << std::endl;
		std::cout << Fraggy << RESET << std::endl;
		std::cout << Diamy << RESET << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl << YELLOW << "Test special attacks" << RESET << std::endl;
	{
		DiamondTrap	Diamy("Diamy");
		std::cout << "Energy points :" << Diamy.getEnergyPoints() << std::endl;
		Diamy.guardGate();
		std::cout << "Energy points :" << Diamy.getEnergyPoints() << std::endl;
		Diamy.highFivesGuys();
		std::cout << "Energy points :" << Diamy.getEnergyPoints() << std::endl;
		Diamy.takeDamage(15);
		std::cout << Diamy << std::endl;
		std::cout << std::endl;
	}
	return (0);
}