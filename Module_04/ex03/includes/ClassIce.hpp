#ifndef CLASSICE_HPP
# define CLASSICE_HPP

# include <iostream>
# include "ClassAMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(Ice const &other);
	Ice(std::string const &type);
	virtual ~Ice(void);

	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif