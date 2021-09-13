#include "Zombie.hpp"

std::string	random_name() {
	std::string name;
	int			len;
	
	len = std::rand() % 3 + 2;
	name += (char)std::toupper((char)(std::rand() % 26 + 97));
	for (int j = 0; j < len; j++) {
		name += ((char)(std::rand() % 26 + 97));
	}
	return name;
}

Zombie* zombieHorde(int N, std::string name) {
	Zombie*	zombie_horde = new Zombie[N];

	for (int i = 0; i < N; ++i) {
		zombie_horde[i].set_name(name + '_' + random_name());
	}
	return	zombie_horde;
}