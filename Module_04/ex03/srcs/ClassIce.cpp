#include "ClassIce.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(std::string const &type) : AMateria(type) {}
	
Ice::Ice(Ice const &other) : AMateria(other._type) {}

Ice::~Ice(void) {}

Ice* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
