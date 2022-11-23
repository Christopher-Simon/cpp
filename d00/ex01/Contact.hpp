/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:01:21 by chsimon           #+#    #+#             */
/*   Updated: 2022/11/21 17:33:14 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact {
public:

	Contact(void);
	Contact(
		std::string f_name,
		std::string l_name,
		std::string n_name,
		std::string p_nb,
		std::string d_secret
	);
	~Contact(void);

	void	printContact( void ) const;
	void	ShortPrintContact( void ) const;
	bool	does_exist( void ) const;

private:
	bool		exists;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif