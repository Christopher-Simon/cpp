#include "ScavTrap.hpp"

int	main(void)
{
	{ClapTrap	Clappy("Clappy");

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
	Clappy.takeDamage(20);}

	std::cout << std::endl << std::endl;
	ScavTrap	Stappy("Stappy");

	Stappy.attack("méchant");
	Stappy.takeDamage(20);
	Stappy.takeDamage(70);
	Stappy.beRepaired(10);
	Stappy.takeDamage(10);
	Stappy.beRepaired(10);
	// ClapTrap	Zizi("zizi");
	// Zii
	return (0);
}