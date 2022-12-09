/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:14:06 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/08 16:49:24 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name ) { 
	Zombie	*newZombie = new Zombie(name); 

	return (newZombie);
}

Zombie* zombieHorde( int N, std::string name ){
	if (N <= 0)
	{
		std::cout << "uncorrect number" << std::endl;
		return (NULL);
	}
	Zombie	*horde = new Zombie[N];	
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
