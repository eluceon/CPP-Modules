#include "Zombie.hpp"

int	main() {

	Zombie*	zombie_horde;

	zombie_horde = zombieHorde(NB_ZOMBIES, "Zombie");
	for (int i = 0; i < NB_ZOMBIES; ++i)
		zombie_horde[i].announce();

	delete [] zombie_horde;
	return 0;
}