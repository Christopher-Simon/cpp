#include "Zombie.hpp"

Zombie::Zombie( void ):name("Zomb") {
	return ;	
}

Zombie::Zombie(std::string input):name(input) {
	return ;	
}

Zombie::~Zombie(void) {
	std::cout << "Schwarzie: Die you zombie " << this->name << std::endl;
	return ;	
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}