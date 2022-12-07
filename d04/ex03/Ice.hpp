/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:05:23 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 20:05:27 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

class Ice 
{
	public:
		Ice();
		Ice(Ice const & raw);
		~Ice();
		Ice & operator=(Ice const & rhs);

	private:
		
};

#endif