/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:05:46 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 12:30:46 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );
void randomChumpStack( std::string name );


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
		Zombie	Test;

		Test.announce();
		std::cout << std::endl;
	}
	std::cout << RED << "______Test 2______" << RESET << std::endl;
	std::cout << std::endl;
	{
		Zombie	*Henry =  newZombie("Henry");
		Zombie	*Ben =  newZombie("Ben");

		Henry->announce();
		Ben->announce();
		std::cout << std::endl << "Schwarzie n'aime pas du tout Jack" << std::endl;
		randomChump("Jack");
		std::cout << GREEN << std::endl << "Schwarzie va tuer Ben ici"  << std::endl;
		delete	Ben;
		std::cout << RESET << std::endl << "Schwarzie n'aime pas du tout John" << std::endl;
		randomChumpStack("John");

		std::cout << GREEN << std::endl << "Schwarzie va tuer Henry ici" << std::endl;
		delete	Henry;
		std::cout << RESET;
	}
	return (0);
}