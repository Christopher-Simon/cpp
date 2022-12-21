#include "ClapTrap.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void)
{
	std::cout << std::endl;
	std::cout << std::endl << YELLOW << "Test Solo Clap" << RESET << std::endl;
	{
		ClapTrap	Clap;
	}
	std::cout << std::endl;
	std::cout << BLUE << "Tests canonique" << RESET << std::endl; 
	std::cout << std::endl;
	{
		ClapTrap	Test;
		ClapTrap	John("John");

		std::cout << Test << std::endl;
		Test.takeDamage(5);
		ClapTrap	Copy(Test);
		std::cout << Test << std::endl;
		std::cout << Copy << std::endl;
		std::cout << std::endl;

		std::cout << John << std::endl;
		John = Copy;
		std::cout << John << std::endl;
		std::cout << Copy << std::endl;
		Copy.takeDamage(5);
		std::cout << John << std::endl;
		std::cout << Copy << std::endl;
	}
	std::cout << std::endl;
	std::cout << BLUE << "Main tests" << RESET << std::endl; 
	std::cout << std::endl;
	{
		ClapTrap	Clappy("Clappy");

		std::cout << Clappy << std::endl;
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		std::cout << Clappy << std::endl;
		std::cout << PURPLE << std::endl;
		Clappy.beRepaired(5);
		std::cout << RESET << std::endl;
		std::cout << Clappy << std::endl;
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		std::cout << Clappy << std::endl;
		Clappy.beRepaired(5);
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.attack("test");
		Clappy.takeDamage(20);
		std::cout << Clappy << std::endl;
		Clappy.beRepaired(5);
		std::cout << Clappy << std::endl;
	}

	return (0);
}