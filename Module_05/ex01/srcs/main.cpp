#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
	
	Bureaucrat	bureaucrat2(149, "Bureaucrat_2");
	Bureaucrat	bureaucrat3("Bureaucrat_3", 42);


	Form formA("Form_A", 40, 50);
	Form formB("Form_B", 40, 50);


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
		bureaucrat2.decreaseGrade();
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
		bureaucrat3.increaseGrade();
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.increaseGrade();
		std::cout << bureaucrat3 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << '\n' << bureaucrat3 << '\n' << formA << std::endl;
	bureaucrat3.signForm(formA);
	std::cout << '\n' << bureaucrat2 << '\n' << formA << std::endl;
	bureaucrat2.signForm(formA);
	return 0;
}