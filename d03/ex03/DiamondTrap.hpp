/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:29:20 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 11:13:02 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIANONDTRAP_HPP
# define DIANONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		~DiamondTrap();

		DiamondTrap(DiamondTrap const & rhs);
		DiamondTrap & operator=(DiamondTrap const & rhs);

		void attack(const std::string & target);

		std::string getName( void ) const;
		int getHitPoints( void ) const;
		int getEnergyPoints( void ) const;
		int getAttackDamage( void ) const;

		void whoAmI();

	private:
		int	_tmp;
		std::string	_name;
};

// std::ostream & operator<<(std :: ostream & o, DiamondTrap const & rhs );

#endif
