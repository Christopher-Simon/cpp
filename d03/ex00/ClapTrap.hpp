/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:08:25 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/13 20:04:08 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <exception>
#include <string>

class ClapTrap 
{
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(ClapTrap const & raw);
		~ClapTrap();
		ClapTrap & operator=(ClapTrap const & rhs);

		std::string getName( void ) const;
		int getHitPoints( void ) const;
		int getEnergyPoints( void ) const;

		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int		_HitPoints;
		int		_EnergyPoints;
		int		_AttackDamage;
};

#endif
