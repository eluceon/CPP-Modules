# include <iostream>
# include <iomanip>
# include <string>

int	main() {
	std::string		str;
	std::string*	stringPTR;
	std::string&	stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "\nThe address in memory" << std::endl;
	std::cout << std::setw(12) << "&str: " << &str << std::endl;
	std::cout << std::setw(12) << "stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(12) << "&stringREF: "<< &stringREF << std::endl;
	std::cout << "\nString" << std::endl;
	std::cout << std::setw(12) << "str: " << str << std::endl;
	std::cout << std::setw(12) << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << std::setw(12) << "stringREF: "<< stringREF << std::endl;

	return 0;
}