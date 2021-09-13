#include "ClassAnimal.hpp"

Animal::Animal(void) {
    _type = "Animal";
}

Animal::Animal(Animal const &other) {
	*this = other;
}

Animal::~Animal(void) {}

Animal &Animal::operator=(Animal const &other) {
    if (this != &other) {
        this->_type = other._type;
    }
	return *this;
}

void    Animal::makeSound(void) const {
    std::cout << "Animal sound!!!!!!" << std::endl;
}

std::string const	&Animal::getType(void) const{
    return _type;
}

WrongAnimal::WrongAnimal(void) {
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) {
	*this = other;
}

WrongAnimal::~WrongAnimal(void) {}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other) {
    if (this != &other) {
        this->_type = other._type;
    }
	return *this;
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal sound!!!!!!" << std::endl;
}

const std::string   &WrongAnimal::getType(void) const{
    return _type;
}