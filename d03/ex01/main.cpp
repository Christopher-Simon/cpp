#include "ScavTrap.hpp"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void)
{
	std::cout << std::endl;
	std::cout << std::endl << YELLOW << "Test Solo Scav" << RESET << std::endl;
	{
		ScavTrap	Scav;
	}
	std::cout << std::endl;
	std::cout << std::endl << YELLOW << "Test canoniques" << RESET << std::endl;
	{
		ScavTrap	Test;
		ScavTrap	John("John");

		std::cout << Test << std::endl;
		Test.takeDamage(5);
		ScavTrap	Copy(Test);
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

		std::cout << std::endl;
		Clappy.attack("test");
		Scavy.attack("test");
		std::cout << std::endl;
	}
	std::cout << std::endl << YELLOW << "Print values" << RESET << std::endl;
	{
		ClapTrap	Clappy("Clappy");
		ScavTrap	Scavy("Scavy");
		
		std::cout << std::endl;
		std::cout << Clappy << RESET << std::endl;
		std::cout << Scavy << RESET << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl << YELLOW << "Test special attack" << RESET << std::endl;
	{
		ScavTrap	Scavy("Scavy");
		
		std::cout << std::endl;
		std::cout << Scavy << RESET << std::endl;
		Scavy.guardGate();
		std::cout << Scavy << RESET << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << YELLOW << "Mains test ScavTrap" << RESET << std::endl; 
		ScavTrap	Scavy("Scavy");

		std::cout << PURPLE  << std::endl; 
		Scavy.guardGate();
		std::cout << RESET  << std::endl;
		Scavy.attack("méchant");
		Scavy.takeDamage(20);
		std::cout << Scavy  << std::endl;
		Scavy.takeDamage(70);
		Scavy.beRepaired(10);
		Scavy.takeDamage(30);
		std::cout << Scavy  << std::endl;
		Scavy.beRepaired(10);
		Scavy.guardGate();
		Scavy.attack("méchant");
		std::cout << Scavy  << std::endl;
	}
	return (0);
}