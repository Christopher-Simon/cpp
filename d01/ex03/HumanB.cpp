#include "HumanB.hpp"

HumanB::HumanB( std::string name ): name(name), weapon(NULL) {
	std::cout << "player : " << this->name << "; Weapon : " << "His tiny hands" << std::endl;
	return ;	
}

HumanB::~HumanB( void ) {
	return ;	
}

void	HumanB::attack(void){
	std::cout << this->name << " attacks with their "; 
	if (!this->weapon)
		std::cout << "tiny hands" << std::endl;
	else 
		std::cout << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
	std::cout << this->name << " grabs a " << this->weapon->getType() << std::endl;
}