#include "Form.hpp"

Form::Form(void)
	: _name("default"), _isSigned(false), _gradeToSign(10), _gradeToExecute(140)
{}

Form::Form(const std::string& name, const int gradeToSign, const int gradeToExecute)
	: _name(name),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const std::string& name, const int gradeToSign,
			const int gradeToExecute, const std::string& target)
	: _name(name),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute),
	_target(target)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other)
	: _name(other._name),
	_isSigned(other._isSigned),
	_gradeToSign(other._gradeToSign),
	_gradeToExecute(other._gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::~Form() {};

Form &Form::operator=(const Form &other) {
	if (this != &other) {
		this->_isSigned = other._isSigned;
	}
	return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "grade is too high!";
	
}

const char* Form::GradeTooLowException::what() const throw() {
	return "grade is too low!";
}

const char* Form::FormUnsignedException::what() const throw() {
	return "the form is unsigned!";
}

std::string	const&	Form::getName(void) const {
	return _name;
}

std::string	const&	Form::getTarget(void) const {
	return _target;
}

int	Form::getGradeToSign(void) const {
	return _gradeToSign;
}

int	Form::getGradeToExecute(void) const {
	return _gradeToExecute;
}

bool	Form::getSignStatus(void) const {
	return _isSigned;
}

void	Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
	out << "Form name: " << form.getName() <<
		"\nSigned: " <<  form.getSignStatus() <<
		"\nGrade required to sign it: " << form.getGradeToSign() <<
		"\nGrade required to execute it: " << form.getGradeToExecute() << std::endl;
	return out;
}

void	Form::execute(Bureaucrat const & executor) const {
	if (_isSigned == false)
		throw FormUnsignedException();
	if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
}
