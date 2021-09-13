#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name)
	: ClapTrap(name + "_clap_name"),
		_name(name)
{
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap deafault constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap	const &other) {
	*this = other;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

void	DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void 	DiamondTrap::whoAmI() {
	std::cout << "My name is "<< this->_name << std::endl;
	std::cout << "ClapTrap's name is " << ClapTrap::_name << std::endl;

};
