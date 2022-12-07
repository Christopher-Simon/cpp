/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:05:30 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/07 20:05:33 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

class Cure 
{
	public:
		Cure();
		Cure(Cure const & raw);
		~Cure();
		Cure & operator=(Cure const & rhs);

	private:
		
};

#endif