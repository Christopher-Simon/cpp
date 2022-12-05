
#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << std::endl << std::endl;
	std::cout << "____________TEST 1_______________"<< std::endl;
	std::cout << std::endl << std::endl;
	{
		DiamondTrap	Test("Diamond");
		ScavTrap	ScavTest("Scav");
		FragTrap	FragTest("Frag");
		ClapTrap	ClapTest("Clap");

		std::cout << Test << std::endl;
		std::cout << ScavTest << std::endl;
		std::cout << FragTest << std::endl;
		std::cout << ClapTest << std::endl;
		std::cout << std::endl;
		Test.attack("Ennemi");
		ScavTest.attack("Ennemi");
		ClapTest.attack("Ennemi");
		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "____________TEST 2_______________"<< std::endl;
	std::cout << std::endl << std::endl;
	{
		DiamondTrap	Test("Guardian");
		Test.guardGate();

		std::cout << std::endl;
		ScavTrap	ScavTest;
		ScavTest.guardGate();

		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "____________TEST 3_______________"<< std::endl;
	std::cout << std::endl << std::endl;
	{
		DiamondTrap	Test("Funny");
		Test.highFivesGuys();

		std::cout << std::endl;
		FragTrap	FragTest;
		FragTest.highFivesGuys();
		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "____________TEST 4_______________"<< std::endl;
	std::cout << std::endl << std::endl;
	{
		DiamondTrap Test("Philo");
		std::cout << std::endl;
		Test.whoAmI();
		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "____________TEST 5_______________"<< std::endl;
	std::cout << std::endl << std::endl;
	{
		ScavTrap	Test("Warrior");
		ClapTrap	ClapTest;

		Test.attack("ennemi");
		ClapTest.attack("ennemi");
	}
// 	{ClapTrap	Clappy("Clappy");

// 	Clappy.attack("test");
// 	Clappy.attack("test");
// 	Clappy.attack("test");
// 	Clappy.attack("test");
// 	Clappy.beRepaired(5);
// 	Clappy.attack("test");
// 	Clappy.attack("test");
// 	Clappy.attack("test");
// 	Clappy.attack("test");
// 	Clappy.attack("test");
// 	Clappy.attack("test");
// 	Clappy.attack("test");
// 	Clappy.attack("test");
// 	Clappy.takeDamage(20);}

// {
// 	std::cout << std::endl << std::endl;
// 	ScavTrap	Stappy("Stappy");

// 	Stappy.attack("méchant");
// 	Stappy.takeDamage(20);
// 	Stappy.takeDamage(70);
// 	Stappy.beRepaired(10);
// 	Stappy.takeDamage(10);
// 	Stappy.beRepaired(10);
// }
// {
// 	std::cout << std::endl << std::endl;

// 	FragTrap Fraggy("Fraggy");

// 	Fraggy.highFivesGuys();	
// }
	return (0);
}