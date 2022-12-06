#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
	}

	std::cout << std::endl << std::endl;

	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will not output the cat sound!
		meta->makeSound();
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