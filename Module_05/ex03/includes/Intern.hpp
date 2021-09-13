#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

typedef struct s_Forms {
	const std::string	formName;
	Form*				(*func)(std::string const&);
}	t_Forms;

class Intern {
public:
	Intern();
	Intern(const Intern &);
	~Intern();

	Intern &operator=(const Intern & other);

	Form *makeForm(const std::string &formName, const std::string &target);
	
	class UnknownFormException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

#endif