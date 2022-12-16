/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:13:07 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/16 17:48:16 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp" 
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}
//******************ACCESSORS*****************//


//**************OVERLOAD OPERATORS**************//

//*****************EXCEPTIONS*****************//


//*****************FONCTIONS*****************//

Base *	Base::generate(void) {
	int	d = std::rand() % 3;

	switch (d)
	{
	case 0:
		return(new A);
	case 1:
		return(new B);
	case 2:
		return(new C);
	}
	return (new A);
}

void	Base::identify(Base* p) {
	A *a;
	B *b;
	C *c;
	
	a = dynamic_cast<A *>(p);
	if (a == NULL)
		std::cout << "Base is not a ptrA" << std::endl;
	else
		std::cout << "Base is a ptrA" << std::endl;
	b = dynamic_cast<B *>(p);
	if (b == NULL)
		std::cout << "Base is not a ptrB" << std::endl;
	else
		std::cout << "Base is a ptrB" << std::endl;
	c = dynamic_cast<C *>(p);
	if (c == NULL)
		std::cout << "Base is not a ptrC" << std::endl;
	else
		std::cout << "Base is a ptrC" << std::endl;
}

void	Base::identify(Base& p) {
	A a;
	B b;
	C c;

	try {
		a = dynamic_cast<A &>(p);
		std::cout << "Base is a refA" << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Base is not a refA" << std::endl;
	}
	try {
		b = dynamic_cast<B &>(p);
		std::cout << "Base is a refB" << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Base is not a refB" << std::endl;
	}
	try {
		c = dynamic_cast<C &>(p);
		std::cout << "Base is a refC" << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Base is not a refC" << std::endl;
	}
}
