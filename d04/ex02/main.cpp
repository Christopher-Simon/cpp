#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

int main()
{
	
	std::cout << std::endl << std::endl;
	std::cout << RED << "_____Test du Brain_____" << RESET << std::endl;
	{
		Brain	Test;
		Test.setIdea(2, "Pizza");
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << Test.getIdea(i) << std::endl;
		}
		std::cout << "Copy(test)" << std::endl;
		Brain	Copy(Test);
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << Copy.getIdea(i) << std::endl;
		}
		Copy.getIdea(101);
		Copy.getIdea(-1);
	}
	std::cout << std::endl << std::endl;
	std::cout << RED << "_____Test des Dog_____" << RESET << std::endl;
	{
		Dog* dog = new Dog();
		Dog* dog2 = new Dog();

		std::cout << PURPLE << "______Setup______" << RESET << std::endl;
		dog->setIdea(0, "Os");
		std::cout << "Idee de dog : " << dog->getIdea(0) << std::endl;
		std::cout << PURPLE << "______Deep Copy______" << RESET << std::endl;
		*dog2 = *dog;
		dog->setIdea(0, "Pizza");
		std::cout << "Idee de dog  : " << dog->getIdea(0) << std::endl;
		std::cout << "Idee de dog2 : " << dog2->getIdea(0) << std::endl;
		Dog* dog3 = new Dog(*dog);
		std::cout << PURPLE << "______Deep Copy & Copy constructor______" << RESET << std::endl;
		std::cout << "Idee de dog  : " << dog->getIdea(0) << std::endl;
		std::cout << "Idee de dog3 : " << dog3->getIdea(0) << std::endl;
		dog->setIdea(0, "Os");
		std::cout << "Idee de dog  : " << dog->getIdea(0) << std::endl;
		std::cout << "Idee de dog3 : " << dog3->getIdea(0) << std::endl;
		delete dog;
		delete dog2;
		delete dog3;
	}
		std::cout << std::endl << std::endl;
	std::cout << RED << "_____Test des Cat_____" << RESET << std::endl;
	{
		Cat* cat = new Cat();
		Cat* cat2 = new Cat();

		std::cout << PURPLE << "______Setup______" << RESET << std::endl;
		cat->setIdea(0, "Os");
		std::cout << "Idee de Cat : " << cat->getIdea(0) << std::endl;
		std::cout << PURPLE << "______Deep Copy______" << RESET << std::endl;
		*cat2 = *cat;
		cat->setIdea(0, "Pizza");
		std::cout << "Idee de Cat  : " << cat->getIdea(0) << std::endl;
		std::cout << "Idee de Cat2 : " << cat2->getIdea(0) << std::endl;
		Cat* cat3 = new Cat(*cat);
		std::cout << PURPLE << "______Deep Copy & Copy constructor______" << RESET << std::endl;
		std::cout << "Idee de cat  : " << cat->getIdea(0) << std::endl;
		std::cout << "Idee de cat3 : " << cat3->getIdea(0) << std::endl;
		cat->setIdea(0, "Os");
		std::cout << "Idee de cat  : " << cat->getIdea(0) << std::endl;
		std::cout << "Idee de cat3 : " << cat3->getIdea(0) << std::endl;
		delete cat;
		delete cat2;
		delete cat3;
	}
	std::cout << std::endl << std::endl;
	std::cout << RED << "_____Test du sujet_____" << RESET << std::endl;
	{
		const	Animal *meta[10];

		for (size_t i = 0; i < 10; i++) {
			if (i < 5)
				meta[i] = new Dog();
			else 
				meta[i] = new Cat();
		}
		for (size_t i = 0; i < 10; i++) {
			delete meta[i];
		}
	}
	std::cout << RED << "_____Test de l'Abstract Class_____" << RESET << std::endl;
	{
		std::cout << "Now that the Animal class is abstract, we cannot write :"<< std::endl;
		std::cout << "Animal	Test;" << std::endl;
		// Animal Test;git@vogsphere.42paris.fr:vogsphere/intra-uuid-809c168b-02da-4406-b8c4-006f78bdba00-4598379-chsimon
	}
	return 0;
}

// int	main(void) {
// 	{
// 		Animal A;
// 		Animal B(A);
// 		A.makeSound();
// 		B.makeSound();
// 	}

// 	std::cout << std::endl << std::endl;

// 	{
// 		Dog	d;
// 		Animal	e(d);
// 		std::cout << "everyone here ?" << std::endl << std::endl;
// 		d.makeSound();
// 		e.makeSound();
// 	}


// 	return (0);
// }