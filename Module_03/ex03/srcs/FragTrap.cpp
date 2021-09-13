#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name)
	: ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
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
	ClapTrap::operator=(other);
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
