#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name)
	: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap deafault constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) {
	*this = other;
}


FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void	FragTrap::attack(std::string const &target) {
	std::cout << "FragTrap: ";
	this->ClapTrap::attack(target);
}

void	FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FragTrap: ";
	this->ClapTrap::takeDamage(amount);
}

void	FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FragTrap: ";
	this->ClapTrap::beRepaired(amount);
}

void 	FragTrap::highFivesGuys() {
	std::cout << "Give me five!" << std::endl;
};
