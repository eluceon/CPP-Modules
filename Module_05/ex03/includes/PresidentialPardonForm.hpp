#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class  PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
	PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm & other);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm & other);
	
    virtual void		execute(Bureaucrat const & executor) const;

	static Form *create(std::string const & target);

};


#endif