#include "easyfind.hpp"

int	main(void)
{
	std::list<int>	lst1;

	std::cout << GREEN << "Test list" << RESET << std::endl;
	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);
	{
		try {
			std::cout << easyfind(lst1, 42) << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			std::cout << easyfind(lst1, 40) << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::vector<int>	vec1;

	vec1.push_back(1);
	vec1.push_back(17);
	vec1.push_back(42);
	std::cout << GREEN << "Test vec vide" << RESET << std::endl;
	{
		try {
			std::cout << easyfind(vec1, 42) << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			std::cout << easyfind(vec1, 40) << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::vector<int>	vec2(10,40);

	vec2.push_back(1);
	vec2.push_back(17);
	vec2.push_back(42);
	std::cout << GREEN << "Test rempli" << RESET << std::endl;
	{
		try {
			std::cout << easyfind(vec2, 42) << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			std::cout << easyfind(vec2, 40) << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			std::cout << easyfind(vec2, 43) << std::endl;
		} catch (const std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
}