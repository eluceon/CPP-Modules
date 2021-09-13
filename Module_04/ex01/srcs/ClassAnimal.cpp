#include "ClassAnimal.hpp"

Animal::Animal(void) {
    _type = "Animal";
     std::cout << "Animal has been born" << std::endl;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "Animal with type has been born" << std::endl;
}

Animal::Animal(Animal const &other) {
	*this = other;
}

Animal::~Animal(void) {
    std::cout << "Animal has been died------------" << std::endl;
}

Animal &Animal::operator=(Animal const &other) {
    if (this != &other) {
        this->_type = other._type;
        std::cout << "Animal has been born with other animal type" << std::endl;
    }
	return *this;
}

void    Animal::makeSound(void) const {
    std::cout << "Animal sound!!!!!!" << std::endl;
}

std::string const	&Animal::getType(void) const{
    return _type;
}