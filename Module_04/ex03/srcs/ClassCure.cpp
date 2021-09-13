#include "ClassCure.hpp"

Cure::Cure(void) : AMateria("cure")  {}

Cure::Cure(std::string const &type) : AMateria(type) {}

Cure::Cure(Cure const &other) : AMateria(other._type) {}

Cure::~Cure(void) {}

Cure* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
}