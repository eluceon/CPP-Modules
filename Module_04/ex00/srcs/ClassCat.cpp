#include "ClassCat.hpp"

Cat::Cat(void) {
    _type = "Cat";
}

Cat::~Cat(void) {}

void    Cat::makeSound(void) const {
    std::cout << "Meow!!!!!!" << std::endl;
}

WrongCat::WrongCat(void) {
    _type = "WrongCat";
}

WrongCat::~WrongCat(void) {}

void    WrongCat::makeSound(void) const {
    std::cout << "WrongCat meow!!!!!!" << std::endl;
}