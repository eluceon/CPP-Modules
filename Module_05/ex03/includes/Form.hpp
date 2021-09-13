#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(const std::string& name, const int gradeToSign, const int gradeToExecute);
	Form(const std::string& name, const int gradeToSign,
			const int gradeToExecute, const std::string& target);
	Form(Form const &other);
	virtual ~Form();

	Form &operator=(const Form &other);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class FormUnsignedException : public std::exception {
	public:
		virtual const char* what() const throw();	
	};

	std::string	const	&getName(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExecute(void) const;
	bool				getSignStatus(void) const;
	std::string	const	&getTarget(void) const;

	void				beSigned(Bureaucrat &bureaucrat);
	virtual void		execute(Bureaucrat const & executor) const = 0;


private:
	const std::string 	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	const std::string	_target;

};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif