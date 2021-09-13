#include "ClapTrap.hpp"

int	main() {
	ClapTrap	eluceon("Dima");
	std::cout << std::endl;

	eluceon.attack("Target_1");
	eluceon.beRepaired(5);
	eluceon.takeDamage(20);
	std::cout << std::endl;

	eluceon.attack("Target_2");
	eluceon.takeDamage(20);
	eluceon.beRepaired(11);
	std::cout << std::endl;

	eluceon.attack("Target_3");
	eluceon.takeDamage(2);
	eluceon.beRepaired(1);
	std::cout << std::endl;

	return 0;
}