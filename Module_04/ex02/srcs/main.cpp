#include "ClassCat.hpp"
#include "ClassDog.hpp"
#include "randomIdea.hpp"

int main()
{
	srand(time(NULL));
	Animal *animals[10];
	for (int i = 0; i < 10; ++i)
		i % 2 ? animals[i] =  new Dog() : animals[i] =  new Cat();
	
	std::cout << "\n=======Checking deep copy=======\n" << std::endl;

	Cat copyCat = *(dynamic_cast<Cat *>(animals[0]));
	Dog copyDog = *(dynamic_cast<Dog *>(animals[1]));

	for (int i = 0; i < NBR_IDEAS; ++i) {
		std::cout << copyCat.getBrain()->getIdea(i) << "\t";
		std::cout << dynamic_cast<Cat *>(animals[0])->getBrain()->getIdea(i) << "\t";
		std::cout << copyDog.getBrain()->getIdea(i) << "\t";
		std::cout << dynamic_cast<Dog *>(animals[1])->getBrain()->getIdea(i) << std::endl;
	}

	std::cout << "\n====+===Deleting animals==+=====\n" << std::endl;

	for (int i = 0; i < 10; ++i)
		delete animals[i];
	return 0;
}