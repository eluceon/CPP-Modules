#include "ClassAMateria.hpp"

AMateria::AMateria(void) : _type("Without material") {}

AMateria::AMateria(std::string const &type) : _type(type) {}
	
AMateria::AMateria(AMateria const &other) : _type(other._type) {}

AMateria &AMateria::operator=(AMateria const &other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria::~AMateria(void) {}

std::string const &AMateria::getType() const{
	return _type;
}

void AMateria::use(ICharacter &) {
	std::cout << "* Use AMateria *" << std::endl;
}