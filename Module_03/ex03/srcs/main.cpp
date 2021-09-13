#include "DiamondTrap.hpp"

int	main() {
	DiamondTrap	diamond("Diamond");

	std::cout << std::endl;

	diamond.attack("Target_1");
	diamond.FragTrap::beRepaired(5);
	diamond.FragTrap::takeDamage(110);
	std::cout << std::endl;

	diamond.attack("Target_2");
	diamond.FragTrap::takeDamage(2);
	diamond.FragTrap::beRepaired(11);
	std::cout << std::endl;

	diamond.attack("Target_3");
	diamond.FragTrap::takeDamage(2);
	diamond.FragTrap::beRepaired(1);
	std::cout << std::endl;

	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();

	std::cout << std::endl;

	return 0;
}