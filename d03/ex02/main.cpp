#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void)
{
	{
		std::cout << std::endl;
		std::cout << BLUE << "Mains test ClapTrap" << RESET << std::endl; 
		std::cout << std::endl;
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
	{
		std::cout << std::endl;
		std::cout << BLUE << "Mains test ScavTrap" << RESET << std::endl; 
		std::cout << std::endl;
		ScavTrap	Stappy("Stappy");

		std::cout << YELLOW  << std::endl; 
		Stappy.guardGate();
		std::cout << RESET  << std::endl;
		Stappy.attack("méchant");
		Stappy.takeDamage(20);
		Stappy.takeDamage(70);
		Stappy.beRepaired(10);
		Stappy.takeDamage(10);
		Stappy.beRepaired(10);
	}
	{
		std::cout << std::endl;
		std::cout << BLUE << "Mains test FragTrap" << RESET << std::endl; 
		std::cout << std::endl;

		FragTrap Fraggy("Fraggy");

		Fraggy.highFivesGuys();	
		Fraggy.highFivesGuys();	
	}
	{
		std::cout << std::endl;
		std::cout << BLUE << "tests ctrl+d FragTrap" << RESET << std::endl; 
		std::cout << std::endl;

		FragTrap Fraggy("Fraggy");

		Fraggy.highFivesGuys();	
		Fraggy.highFivesGuys();	
	}
	return (0);
}