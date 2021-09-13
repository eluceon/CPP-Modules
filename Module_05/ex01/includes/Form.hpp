#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(const std::string& name, const int gradeToSign, const int gradeToExecute);
	Form(Form const &other);
	~Form();

	Form &operator=(const Form &other);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	std::string	const	&getName(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExecute(void) const;
	bool				getSignStatus(void) const;

	void				beSigned(Bureaucrat &bureaucrat);

private:
	const std::string 	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif