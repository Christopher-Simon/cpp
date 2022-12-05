/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:57:58 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/05 13:57:17 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		~ScavTrap();

		ScavTrap( ScavTrap const & rhs );
		ScavTrap & operator=( ScavTrap const & rhs );
		void attack(const std::string & target);

		void	guardGate();

	protected:
};
