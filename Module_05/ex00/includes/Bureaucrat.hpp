#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>


class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(int grade, std::string const &name);
	Bureaucrat(Bureaucrat const &other);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &other);

	std::string	const	&getName(void) const;
	int					getGrade(void) const;
	void				increaseGrade(int grade = 1);
	void				decreaseGrade(int grade = 1);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

private:
	std::string const	_name;
	int					_grade;

};

std::ostream & operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif