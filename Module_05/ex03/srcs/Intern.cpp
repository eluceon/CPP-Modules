#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &) {}
Intern::~Intern() {}

Intern &Intern::operator=(const Intern &) {
	return *this;
}

Form	*Intern::makeForm(const std::string &formName,const std::string &target) {

	t_Forms	forms[3] = {
		{"PresidentialPardonForm", &PresidentialPardonForm::create},
		{"RobotomyRequestForm", &RobotomyRequestForm::create},
		{"ShrubberyCreationForm", &ShrubberyCreationForm::create}
	};

	for (int i = 0; i < 3; ++i) {
		if (forms[i].formName.compare(formName) == 0) {
			std::cout << GREEN_COLOR << "Intern creates " << formName <<
				RESTORE_COLOR << std::endl;
			return forms[i].func(target);
		}
	}
	
	throw Intern::UnknownFormException();
}

const char* Intern::UnknownFormException::what() const throw() {
	return "The form is unknown!";
}