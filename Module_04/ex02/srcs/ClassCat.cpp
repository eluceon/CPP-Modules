#include "ClassCat.hpp"

Cat::Cat(void) : Animal("Cat") {
	_brain = new Brain();
     std::cout << "Cat has been born" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other) {
	_brain = new Brain(*other.getBrain());
    std::cout << _type << " has been born with other cat" << std::endl;
}

Cat::~Cat(void) {
	delete _brain;
	std::cout << "Cat has been died" << std::endl;
}

Cat	&Cat::operator=(Cat const &other) {
	if (this != &other) {
		this->~Cat();
		_brain = new Brain(*other.getBrain());
    	std::cout << _type << " equal other cat has been born" << std::endl;
    }
	return *this;
}

void    Cat::makeSound(void) const {
    std::cout << "Meow!!!!!!" << std::endl;
}

Brain const *Cat::getBrain(void) const {
	return _brain;
}