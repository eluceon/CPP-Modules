#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap (parent) deafault constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void) {
	 std::cout << "ClapTrap (parent) Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(std::string const &target) {
	if (this->_energyPoints >= 5) {
		this->_energyPoints -= 5;
		std::cout << this->_name << " attacks " <<
		target << ", causing " << this->_attackDamage <<
		" points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount > this->_hitPoints)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	std::cout << this->_name << " has taken " << amount <<
		" points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	std::cout << this->_name << " has been repaierd by " << amount <<
		" points!" << std::endl;	
}


std::string		&ClapTrap::getName(void) {
	return _name;
}

unsigned int	ClapTrap::getHitPoints(void) {
	return _hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) {
	return _energyPoints;
}

unsigned int	ClapTrap::getAttackDamage(void) {
	return _attackDamage;
}