#ifndef CLASSCURE_HPP
# define CLASSCURE_HPP

# include <iostream>
# include "ClassAMateria.hpp"

class Cure  : public AMateria {
public:
	Cure(void);
	Cure(Cure const &other);
	Cure(std::string const &type);
	virtual ~Cure(void);

	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif