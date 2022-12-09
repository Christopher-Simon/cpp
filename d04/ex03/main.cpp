/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsimon <chsimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:00:11 by chsimon           #+#    #+#             */
/*   Updated: 2022/12/09 18:49:39 by chsimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int	main(void)
{
	std::cout << YELLOW << "Welcome, 1st world generated" << RESET << std::endl;
	{
		Character Bob("bob");

		std::cout << Bob.getName() << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << YELLOW << "2nd world generated : 1 Character" << RESET << std::endl;
	{
		ICharacter *Joe = new Character();
		
		std::cout << Joe->getName() << std::endl;
		delete Joe;
	}
	std::cout << std::endl << std::endl;
	std::cout << YELLOW << "3rd world generated : 2 Characters copy" << RESET << std::endl;
	{
		Character *Joe = new Character("Joe");
		Character *Default = new Character();
		
		std::cout << BLUE << "Default->getName() : " << RESET << Default->getName()  << std::endl;
		std::cout << BLUE << "Joe->getName() : " << RESET << Joe->getName()  << std::endl;
		std::cout << BLUE << "Default = Joe" << RESET << std::endl; 
		*Default = *Joe;
		std::cout << BLUE << "Default->getName() : " << RESET << Default->getName()  << std::endl;
		
		delete Joe;
		delete Default;
	}
	std::cout << std::endl << std::endl;
	std::cout << YELLOW << "4th world generated : Test Constructeur copie" << RESET << std::endl;
	{
		Character *Joe = new Character("Joe");
		Character *John = new Character("John");
		Character *Default = new Character(*Joe);
		
		std::cout << BLUE << "Default->getName() : " << RESET << Default->getName()  << std::endl;
		std::cout << BLUE << "Joe->getName() : " << RESET << Joe->getName()  << std::endl;
		std::cout << BLUE << "Default = John" << RESET << std::endl; 
		*Default = *John;
		std::cout << BLUE << "Default->getName() : " << RESET << Default->getName()  << std::endl;
					
		delete Joe;
		delete John;
		delete Default;
	}
	std::cout << std::endl << std::endl;
	std::cout << YELLOW << "5th world generated : Test Materia" << RESET << std::endl;
	{
		AMateria *Test = new Ice();
		AMateria *Copy = Test->clone();

		delete Test;
		std::cout << Copy->getType() << std::endl;

		AMateria *Test2 = new Cure();
		delete Copy;
		Copy = Test2->clone();
		std::cout << Copy->getType() << std::endl;
		delete Test2;
		delete Copy;
	}
	std::cout << std::endl << std::endl;
	std::cout << YELLOW << "6th world generated : Test Equip" << RESET << std::endl;
	{
		Character	*Chris = new Character("Chris"); 
		Character	*Beubeu = new Character("Beubeu"); 
		AMateria *TestIce = new Ice();
		AMateria *TestCure = new Cure();
		AMateria *CopyIce = TestIce->clone();
		AMateria *CopyCure = TestCure->clone();

		Chris->equip(TestIce);
		Chris->equip(TestCure);
		Chris->equip(CopyIce);
		Chris->equip(CopyCure);
		// *Chris = *Beubeu;
		*Beubeu = *Chris;
		Chris->use(0, *Beubeu);
		Chris->use(1, *Beubeu);
		Chris->use(2, *Beubeu);
		Chris->use(3, *Beubeu);
		Chris->unequip(0);
		Chris->use(0, *Beubeu);
		Beubeu->use(0, *Chris);
		delete 	Chris;
		delete 	Beubeu;
		delete	TestIce;
	}
	std::cout << std::endl << std::endl;
	std::cout << YELLOW << "7th world generated : Test SourceMateria" << RESET << std::endl;
	{
		MateriaSource	Test;
		AMateria *TestIce = new Ice();
		AMateria *TestCure = new Cure();

		Test.learnMateria(TestIce);
		AMateria *TestMat = Test.createMateria("cure");
		AMateria *TestMat2 = Test.createMateria("ice");
		Test.learnMateria(TestCure);
		AMateria *TestMat3 = Test.createMateria("cure");
		MateriaSource Source2 = MateriaSource(Test);
		AMateria *TestMat4 = Test.createMateria("cure");
		delete TestIce;
		delete TestCure;
		delete TestMat;
		delete TestMat2;
		delete TestMat3;
		delete TestMat4;
	}
	std::cout << std::endl << std::endl;
	std::cout << YELLOW << "Subject world generated : Test" << RESET << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		AMateria	*SubjectIce = new Ice();
		AMateria	*SubjectCure = new Cure();
		src->learnMateria(SubjectIce);
		src->learnMateria(SubjectCure);
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		delete SubjectIce;
		delete SubjectCure;
	}
	std::cout << std::endl << std::endl;
	std::cout << YELLOW << "7th world generated : Readable Test" << RESET << std::endl;
	{
		AMateria	*Floor[4];
		std::cout << BLUE << "Welcome to the world Chris" << RESET << std::endl;
		Character *Chris = new Character("Chris");
		std::cout << BLUE << "This MateriaSource will help you, it can store 4 materias" << RESET << std::endl;
		MateriaSource *Source = new MateriaSource();
		std::cout << BLUE << "I will give it power" << RESET << std::endl;
		std::cout << std::endl;
		AMateria	*GodMatIce = new Ice[4];
		AMateria	*GodMatCure = new Cure();
		std::cout << std::endl;
		Source->learnMateria(&GodMatIce[0]);
		Source->learnMateria(&GodMatIce[1]);
		Source->learnMateria(&GodMatIce[2]);
		Source->learnMateria(GodMatCure);
		std::cout << RED;
		Source->learnMateria(&GodMatIce[3]);
		std::cout << RESET;
		std::cout << std::endl;
		std::cout << BLUE << "Oups, One too many" << RESET << std::endl;
		std::cout << BLUE << "I am destroying these materias, the Source will provide" << RESET << std::endl;
		std::cout << std::endl;
		delete[] GodMatIce;
		delete GodMatCure;
		std::cout << BLUE << "Well try the source now" << RESET << std::endl;
		std::cout << std::endl;
		std::cout << PURPLE << "I want a fire materia" << RESET << std::endl;
		Chris->equip(Source->createMateria("fire"));
		std::cout << PURPLE << "Well then some ice materia" << RESET << std::endl;
		Chris->equip(Source->createMateria("ice"));
		Chris->equip(Source->createMateria("ice"));
		Chris->equip(Source->createMateria("ice"));
		Chris->equip(Source->createMateria("ice"));
		std::cout << RED;
		AMateria *Tmp = Source->createMateria("ice");
		Chris->equip(Tmp);
		delete Tmp;
		std::cout << RESET << std::endl;
		
		std::cout << BLUE << "Oh no, an enemy appears" << RESET << std::endl;
		Character *Benoit = new Character("Benoit");
		std::cout << YELLOW << "I am " << Benoit->getName() << ", and I going to voler tes abilities" << RESET << std::endl;
		*Benoit = *Chris;
		Benoit->use(1, *Chris);
		Chris->use(1, *Benoit);
		std::cout << YELLOW << "My DarkSource will copy yours" << RESET << std::endl;
		MateriaSource *DarkSource = new MateriaSource(*Source);
		Floor[0] = Benoit->getMateria(0);
		Benoit->unequip(0);
		Benoit->equip(DarkSource->createMateria("cure"));
		std::cout << YELLOW << "My slot 0 is now cure" << RESET << std::endl;
		Benoit->use(0,*Benoit);
		Chris->use(0, *Benoit);
		std::cout << YELLOW << "I am going to learn lighting bolt" << RESET << std::endl;
		Floor[1] = Benoit->getMateria(1);
		Benoit->unequip(1);
		Benoit->equip(DarkSource->createMateria("lighting bolt"));
		Benoit->use(1,*Chris);
		std::cout << YELLOW << "What !?" << RESET << std::endl;
		Chris->use(1, *Benoit);
		std::cout << YELLOW << "NooooOoo !!" << RESET << std::endl;
		delete Benoit;
		std::cout << BLUE << "And the DarkSource breaks" << RESET << std::endl;
		delete DarkSource;
		std::cout << BLUE << "I am going to clean the floor" << RESET << std::endl;		
		delete Floor[1];
		delete Floor[0];
		std::cout << BLUE << "Well that was fun" << RESET << std::endl;
		std::cout << std::endl;	
		delete Chris;
		delete Source;
	}
	std::cout << std::endl;
	return (0);
}
