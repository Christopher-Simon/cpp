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
	std::cout << std::endl;
	std::cout << std::endl << YELLOW << "Test Solo Frag" << RESET << std::endl;
	{
		FragTrap	Frag;
	}
	std::cout << std::endl;
	std::cout << std::endl << YELLOW << "Test canoniques" << RESET << std::endl;
	{
		FragTrap	Test;
		FragTrap	John("John");

		std::cout << Test << std::endl;
		Test.takeDamage(5);
		FragTrap	Copy(Test);
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
	std::cout << std::endl << YELLOW << "Test diff attack" << RESET << std::endl;
	{
		ClapTrap	Clappy("Clappy");
		ScavTrap	Scavy("Scavy");
		FragTrap	Fraggy("Fraggy");

		std::cout << std::endl;
		Clappy.attack("test");
		Scavy.attack("test");
		Fraggy.attack("test");
		std::cout << std::endl;
	}
	std::cout << std::endl << YELLOW << "Print values" << RESET << std::endl;
	{
		ClapTrap	Clappy("Clappy");
		ScavTrap	Scavy("Scavy");
		FragTrap	Fraggy("Fraggy");
		
		std::cout << std::endl;
		std::cout << Clappy << RESET << std::endl;
		std::cout << Scavy << RESET << std::endl;
		std::cout << Fraggy << RESET << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << BLUE << "Mains test FragTrap" << RESET << std::endl; 
		std::cout << std::endl;

		FragTrap Fraggy("Fraggy");

		std::cout << Fraggy << std::endl;
		Fraggy.highFivesGuys();	
		std::cout << Fraggy << std::endl;
		Fraggy.takeDamage(100);
		std::cout << Fraggy << std::endl;
		Fraggy.highFivesGuys();
		Fraggy.attack("test");
		Fraggy.beRepaired(100);
		Fraggy.takeDamage(100);
		std::cout << Fraggy << std::endl;

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