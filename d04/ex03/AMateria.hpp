/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:01:01 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/08 17:26:10 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria 
{
	public:
		AMateria();
		AMateria(AMateria const & raw);
		virtual ~AMateria();
		AMateria & operator=(AMateria const & rhs);

		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);
		//[...]
	private:
	
	protected:
		std::string	_type;
};

#endif