/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:08:25 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/02 18:56:55 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap {
	public:
		ClapTrap(const std::string name);
		~ClapTrap();
		
		std::string getName( void ) const;
		int getHitPoints( void ) const;
		int getEnergyPoints( void ) const;

		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected :
		std::string	_name;
		int		_HitPoints;
		int		_EnergyPoints;
		int		_AttackDamage;
};

#endif
