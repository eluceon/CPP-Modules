#include "ClassPhonebook.hpp"

int	main(void) {
	Phonebook	phonebook;
	std::string	input;

	std::cout << "Enter ADD, SEARCH or EXIT command" << std::endl;
	while (1) {
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			phonebook.add_contact();
		else if (!input.compare("SEARCH"))
			phonebook.search_contact();
		else if (!input.compare("EXIT"))
			return 0;
		else
			std::cout << "Wrong command. Enter ADD, SEARCH or EXIT." << std::endl;
	}
	return 0;
}
