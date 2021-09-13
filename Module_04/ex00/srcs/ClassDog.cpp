#include "ClassDog.hpp"

Dog::Dog(void) {
    _type = "Dog";
}

Dog::~Dog(void) {
}

void    Dog::makeSound(void) const {
    std::cout << "Woof!!!!!!" << std::endl;
}