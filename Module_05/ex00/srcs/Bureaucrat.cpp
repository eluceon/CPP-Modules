#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :_name("NoName"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) :_name(name) {
	if (grade < 1) {
		_grade = 1;
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		_grade = 150;
		throw GradeTooLowException();
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat(int grade, std::string const &name) :_name(name) {
	if (grade < 1) {
		_grade = 1;
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		_grade = 150;
		throw GradeTooLowException();
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {};

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) {
	if (this != &other) {
		this->_grade = other._grade;
	}
	return *this;
}

void	Bureaucrat::increaseGrade(int grade) {
	if (this->_grade - grade < 1) {
		this->_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade -= grade;
}

void	Bureaucrat::decreaseGrade(int grade) {
	if (this->_grade + grade > 150) {
		this->_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
		this->_grade += grade;
}

std::string	const	&Bureaucrat::getName(void) const {
	return _name;
}

int	Bureaucrat::getGrade(void) const {
	return _grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade is too high!");
	
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade is too low!");
}

std::ostream & operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " <<
		bureaucrat.getGrade();
	return out;
}
