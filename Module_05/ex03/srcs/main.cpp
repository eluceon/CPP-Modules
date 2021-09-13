#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void test_form(Bureaucrat &good, Bureaucrat &bad, Form &form) {
	std::cout << form << std::endl;
	good.executeForm(form);
	good.signForm(form);
	good.executeForm(form);
	bad.executeForm(form);
}

int main() {

	Intern intern;
	Form *form;

	Bureaucrat	bad(149, "Bad");
	std::cout << bad << std::endl;
	Bureaucrat	good("Good", 5);
	std::cout << good << std::endl;

	std::cout << "\n=============ShrubberyCreationForm============" << std::endl;
	form = intern.makeForm("ShrubberyCreationForm", "targetShrub");
	test_form(good, bad, *form);
	delete(form);

	std::cout << "\n==============RobotomyRequestForm=============" << std::endl;
	form = intern.makeForm("RobotomyRequestForm", "targetShrub");
	test_form(good, bad, *form);
	delete(form);
	
	std::cout << "\n=============PresidentialPardonForm===========" << std::endl;
	form = intern.makeForm("PresidentialPardonForm", "targetPresident");
	test_form(good, bad, *form);
	delete(form);


	std::cout << "\n==============WrongForm=================" << std::endl;
	try {
		form = intern.makeForm("WrongForm", "Bender");
		test_form(good, bad, *form);
		delete form;
	}
	catch (std::exception &e) {
		std::cerr << RED_COLOR << "Intern Exception: " << e.what() <<
						RESTORE_COLOR << std::endl;
	}

	return 0;
}