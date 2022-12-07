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
	std::cout << GREEN << "TEST With Good Class" << RESET << std::endl;
	{
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << PURPLE << "animal->getType() : " << RESET;
		std::cout << animal->getType() << " " << std::endl;
		std::cout << PURPLE << "dog->getType() : " << RESET;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << PURPLE << "cat->getType() : " << RESET;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << PURPLE << "animal->makeSound() : " << RESET;
		animal->makeSound();
		std::cout << PURPLE << "dog->makeSound() : " << RESET;
		dog->makeSound();
		std::cout << PURPLE << "cat->makeSound() : " << RESET;
		cat->makeSound(); //will output the cat sound!
	}

	std::cout << std::endl << std::endl;
	std::cout << RED << "TEST With Wrong Class" << RESET << std::endl;
	{
		const WrongAnimal* wrongAnimal = new WrongAnimal();
		const WrongAnimal* wrongCat = new WrongCat();

		std::cout << PURPLE << "wrongCat->getType() : " << RESET;
		std::cout << wrongCat->getType() << " " << std::endl;
		std::cout << PURPLE << "wrongAnimal->makeSound() : " << RESET;
		wrongAnimal->makeSound();
		std::cout << PURPLE << "wrongCat->makeSound() : " << RESET;
		wrongCat->makeSound(); //will not output the cat sound!
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