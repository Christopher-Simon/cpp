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
		delete dog;
		delete dog2;
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