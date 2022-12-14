#include "ClapTrap.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void)
{
	std::cout << BLUE << "Tests canonique" << RESET << std::endl; 
	{
		ClapTrap	Test;
		ClapTrap	Copy(Test);
		ClapTrap	John("John");

		John = Copy;
	}
	std::cout << BLUE << "Main tests" << RESET << std::endl; 
	{
		ClapTrap	Clappy("Clappy");

		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.beRepaired(5);
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.takeDamage(20);
	}

	return (0);
}