#include "ClassCat.hpp"
#include "ClassDog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	// WronAnimal and WrongCat
	const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* x = new WrongCat();
    std::cout << wrongAnimal->getType() << " " << std::endl;
    std::cout << x->getType() << " " << std::endl;
    x->makeSound();
    wrongAnimal->makeSound();
	delete wrongAnimal;
	delete x;

	return 0;
}