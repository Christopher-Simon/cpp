/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:01:01 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 20:04:00 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria 
{
	public:
		AMateria();
		AMateria(AMateria const & raw);
		~AMateria();
		AMateria & operator=(AMateria const & rhs);

	private:
		
};

#endif