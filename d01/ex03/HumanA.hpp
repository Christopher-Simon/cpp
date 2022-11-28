/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:51:31 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/24 19:03:49 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_A
# define HUMANA_CLASS_A

#include <iostream>
#include "Weapon.hpp"

class	HumanA {

public:

	HumanA(std::string name, Weapon	&weapon);
	~HumanA(void);

	void	attack(void);
	void	setWeapon(Weapon &weapon);

private:
	std::string	name;
	Weapon		&weapon;
};

#endif