/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:51:31 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/24 19:00:00 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_B
# define HUMANA_CLASS_B

#include <iostream>
#include "Weapon.hpp"

class	HumanB {

public:

	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon &weapon);

private:
	std::string	name;
	Weapon		*weapon;
};

#endif