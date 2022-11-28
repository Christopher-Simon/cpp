/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:49:06 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/24 13:51:29 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_CLASS_H
# define	ZOMBIE_CLASS_H

#include <iostream>

class Zombie {
	
public:

	Zombie(void);
	Zombie(std::string input);
	~Zombie(void);

	void	setName(std::string name);
	void	announce( void );

private:
	std::string	name;

	
} ;

#endif