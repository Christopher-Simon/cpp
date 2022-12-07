/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:05:46 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 12:33:40 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void){
	Zombie	*Henry =  newZombie("Henry");

	Henry->announce();
	std::cout << std::endl << "Schwarzie n'aime pas du tout Jack" << std::endl;
	randomChump("Jack");

	std::cout << std::endl << "Schwarzie va tuer Henry ici" << std::endl;
	delete	Henry;

	std::cout << std::endl << RED << "Schwarzie: oh shit" << RESET << std::endl;
	Zombie	*Horde = zombieHorde(5, "Horde");
	for (int i = 0; i < 5; i++)
		Horde[i].announce();
	std::cout << std::endl << "Schwarzie va les saccager" << std::endl;
	delete[] Horde;
	return (0);
}