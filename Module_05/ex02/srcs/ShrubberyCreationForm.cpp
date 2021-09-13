#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    :   Form("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : Form(other.getName(), other.getGradeToSign(),
	        other.getGradeToExecute(), other.getTarget())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other) {
	if (this != &other)
		Form::operator=(other);
	return *this;
}

const char* ShrubberyCreationForm::OpenFileException::what() const throw() {
	return	"ShrubberyCreationForm Exception: Could not create file for writing!";
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
   	std::ofstream	outf;
   	outf.open((getTarget() + "_shrubbery").c_str(), std::ios::trunc);
   	if (!outf.good())
		throw OpenFileException();

	outf << "		ccee88oo\n";
	outf << "  C8O8O8Q8PoOb o8oo\n";
	outf << " dOB69QO8PdUOpugoO9bD\n";
	outf << "CgggbU8OU qOp qOdoUOdcb\n";
	outf << "    6OuU  /p u gcoUodpP\n";
	outf << "      ||//  /douUP\n";
	outf << "        \\||///\n";
	outf << "         |||/|\n";
	outf << "         |||||\n";
	outf << "         |||||\n";
	outf << "   .....//|||||...." << std::endl;;
	outf.close();
}