#include "ClassDog.hpp"

Dog::Dog(void) : Animal("Dog") {
	_brain = new Brain();
     std::cout << "Dog has been born" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other) {
	_brain = new Brain(*other.getBrain());
    std::cout << _type << " has been born with other dog" << std::endl;
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "Dog has been died" << std::endl;
}

Dog	&Dog::operator=(Dog const &other) {
	if (this != &other) {
		this->~Dog();
		_brain = new Brain(*other.getBrain());
    	std::cout << _type << " equal other dog has been born" << std::endl;
    }
	return *this;
}

void    Dog::makeSound(void) const {
    std::cout << "Woof!!!!!!" << std::endl;
}

Brain const *Dog::getBrain(void) const {
	return _brain;
}