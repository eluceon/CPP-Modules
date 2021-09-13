#include "Zombie.hpp"

std::string	random_name() {
	std::string name;
	int			len;
	
	len = std::rand() % 5 + 3;
	name += (char)std::toupper((char)(std::rand() % 26 + 97));
	for (int j = 0; j < len; j++) {
		name += ((char)(std::rand() % 26 + 97));
	}
	name.append(" Zombie");
	return name;
}

int	main() {
	Zombie		stack_zombie("Stack Zombie");
	Zombie		*alloced_zombie;

	stack_zombie.announce();

	alloced_zombie = newZombie("Alloc Zombie");
	alloced_zombie->announce();

	std::srand(std::time(0));
    for (int i = 0; i < 10; i++) {
		randomChump(random_name());
	}
	delete alloced_zombie;
	return 0;
}