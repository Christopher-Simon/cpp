/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christopher <christopher@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:57:58 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/14 11:23:03 by christopher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(ScavTrap const & raw);
		~ScavTrap();
		ScavTrap & operator=(ScavTrap const & rhs);
		void 	attack(const std::string & target);
		void	guardGate();

	protected:
};
