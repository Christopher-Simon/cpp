/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:05:46 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/24 13:39:55 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(void){
	Zombie	*Henry =  newZombie("Henry");

	Henry->announce();
	std::cout << std::endl << "Schwarzie n'aime pas du tout Jack" << std::endl;
	randomChump("Jack");

	std::cout << std::endl << "Schwarzie va tuer Henry ici" << std::endl;
	delete	Henry;
	return (0);
}