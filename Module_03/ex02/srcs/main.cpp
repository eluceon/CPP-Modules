#include "FragTrap.hpp"


int	main() {
	FragTrap	frag("Frag");

	std::cout << std::endl;

	frag.attack("Target_1");
	frag.beRepaired(5);
	frag.takeDamage(110);
	std::cout << std::endl;

	frag.attack("Target_2");
	frag.takeDamage(2);
	frag.beRepaired(11);
	std::cout << std::endl;

	frag.attack("Target_3");
	frag.takeDamage(2);
	frag.beRepaired(1);
	std::cout << std::endl;

	frag.highFivesGuys();
	std::cout << std::endl;

	return 0;
}