/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:54:01 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 12:37:23 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <iostream>

class	Weapon {

public:

	Weapon(std::string input);
	~Weapon(void);

	const std::string	getType(void) const;
	void	setType(std::string input);

private:
	std::string	type;

} ;

#endif
