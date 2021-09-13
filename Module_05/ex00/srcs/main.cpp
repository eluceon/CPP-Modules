
#include "Bureaucrat.hpp"

int main() {
	
	Bureaucrat	bureaucrat2(50, "Bureaucrat_2");
	Bureaucrat	bureaucrat3("Bureaucrat_3", 50);

	try {
		Bureaucrat	bureaucrat1("Bureaucrat_1", -1);
		std::cout << bureaucrat1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		std::cout << bureaucrat2 << std::endl;
		bureaucrat2.decreaseGrade(100);
		std::cout << bureaucrat2 << std::endl;
		bureaucrat2.decreaseGrade();
		std::cout << bureaucrat2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.increaseGrade(49);
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.increaseGrade();
		std::cout << bureaucrat3 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}