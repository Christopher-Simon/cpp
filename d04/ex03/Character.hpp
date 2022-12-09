/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:53:35 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/09 18:30:54 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(Character const & raw);
		~Character();
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target) ;
		AMateria	*getMateria(int idx) const;
		Character & operator=(Character const & rhs);
		std::string const & getName() const;
	private:
		const std::string _name;
		AMateria	*_matSlot[4];
};

#endif