#include "ClapTrap.hpp"

int	main(void)
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

	return (0);
}