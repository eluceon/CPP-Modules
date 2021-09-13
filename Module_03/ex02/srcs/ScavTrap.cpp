#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name)
	: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap deafault constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) {
	*this = other;
}


ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return *this;
}

void	ScavTrap::attack(std::string const &target) {
	std::cout << "ScavTrap: ";
	this->ClapTrap::attack(target);
}

void	ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap: ";
	this->ClapTrap::takeDamage(amount);
}

void	ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "ScavTrap: ";
	this->ClapTrap::beRepaired(amount);
}

void 	ScavTrap::guardGate() {
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
};
