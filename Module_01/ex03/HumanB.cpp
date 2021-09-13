#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string const &name) : _name(name)
{
}

HumanB::~HumanB()
{
}


void	HumanB::attack(void) const {
    if (this->_weapon) {
        std::cout << this->_name << "  attacks with his ";
        std::cout << this->_weapon->getType() << std::endl;
    } else {
        std::cout << this->_name << "  doesn't have weapon.";
    }
}

void 	HumanB::setWeapon(const Weapon &weapon) {
    this->_weapon = &weapon;
}
