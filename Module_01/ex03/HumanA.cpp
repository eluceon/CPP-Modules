#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &weapon)
    : _weapon(weapon), _name(name) 
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) const {
    std::cout << this->_name << "  attacks with his ";
    std::cout << this->_weapon.getType() << std::endl;
}