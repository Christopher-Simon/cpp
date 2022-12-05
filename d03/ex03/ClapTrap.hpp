/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:08:25 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/05 14:24:33 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap {
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		~ClapTrap();

		ClapTrap(ClapTrap const & raw);		
		ClapTrap & operator=(ClapTrap const & rhs);

		// std::string getName( void ) const;
		virtual std::string getName( void ) const;
		virtual int getHitPoints( void ) const;
		virtual int getEnergyPoints( void ) const;
		virtual int getAttackDamage( void ) const;

		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected :
		std::string _name;
		int		_HitPoints;
		int		_EnergyPoints;
		int		_AttackDamage;
};

std::ostream & operator<<(std :: ostream & o, ClapTrap const & rhs );

#endif
