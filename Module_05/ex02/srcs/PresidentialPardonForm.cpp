#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    :   Form("PresidentialPardonForm", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : Form(other.getName(), other.getGradeToSign(),
	        other.getGradeToExecute(), other.getTarget())
{
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & other) {
	if (this != &other)
		Form::operator=(other);
	return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
    std::cout << GREEN_COLOR << getTarget() <<
        " has been pardoned by Zafod Beeblebrox" <<
        RESTORE_COLOR << std:: endl;
}