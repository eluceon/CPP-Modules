#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "New zombie has been born" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " has died" << std::endl;
}

void	Zombie::set_name(std::string name) {
	this->_name = name;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}