#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include <cstdlib>
# include "Form.hpp"

class  RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm & other);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm & other);
	
    virtual void		execute(Bureaucrat const & executor) const;

	static Form *create(std::string const & target);
};

#endif