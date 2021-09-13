#include <iostream>
#include "iter.hpp"

template <typename T>
void	printTest(const T &element) {
	std::cout << element << " ";
}

int	main(void) {

	char	charArray[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	iter(charArray, 6, printTest);
	std::cout << std::endl;

	std::string	stringArray[] = {"Hello", "world", "!"};
	iter(stringArray, 3, printTest);
	std::cout << std::endl;

	int	intArray[] = {7, 45, 7, 8, -5, 8, -78};
	iter(intArray, 7, printTest);
	std::cout << std::endl;

	return 0;
}