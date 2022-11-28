/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:05:46 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/24 14:02:24 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

int	main(void){
	Zombie	*Henry =  newZombie("Henry");

	Henry->announce();
	std::cout << std::endl << "Schwarzie n'aime pas du tout Jack" << std::endl;
	randomChump("Jack");

	std::cout << std::endl << "Schwarzie va tuer Henry ici" << std::endl;
	delete	Henry;

	std::cout << std::endl << "Schwarzie: oh shit" << std::endl;
	Zombie	*Horde = zombieHorde(5, "horde");
	for (int i = 0; i < 5; i++)
		Horde[i].announce();
	std::cout << std::endl << "Schwarzie va les saccager" << std::endl;
	delete[] Horde;
	return (0);
}