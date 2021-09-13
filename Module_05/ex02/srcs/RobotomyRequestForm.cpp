#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    :   Form("RobotomyRequestForm", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : Form(other.getName(), other.getGradeToSign(),
	        other.getGradeToExecute(), other.getTarget())
{
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & other) {
	if (this != &other)
		Form::operator=(other);
	return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
   	for (int i = 0; i < 10; ++i) {
        std::cout << "\aBzzzzzzz dzzzzzz... ";
    }
    std::cout << std::endl;
    if (rand() % 100 < 50) {
        std::cout << GREEN_COLOR << getTarget() << " has been robotomized successfully" <<
            RESTORE_COLOR << std::endl;
    }
    else {
        std::cout << RED_COLOR << getTarget() << " has failed to be robotomized" <<
            RESTORE_COLOR << std::endl;
    }
}