#include <iostream>

int	main(void){
	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "addresse de str :" << &str << std::endl;
	std::cout << "addresse de stringPTR :" << &stringPTR << std::endl;
	std::cout << "addresse de stringREF :" << &stringREF << std::endl;

	std::cout << "valeur de str :" << str << std::endl;
	std::cout << "valeur de stringPTR (qui est l'adresse de str) :" << stringPTR << std::endl;
	std::cout << "valeur de str par stringPTR :" << *stringPTR << std::endl;
	std::cout << "valeur de stringREF :" << stringREF << std::endl;
	return (0);
}