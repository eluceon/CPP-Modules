#ifndef CLASSAMATERIA_HPP
# define CLASSAMATERIA_HPP

#include <iostream>
#include "ClassICharacter.hpp"

class AMateria {

public:
	AMateria(void);
	AMateria(AMateria const &other);
	AMateria(std::string const & type);
	virtual ~AMateria(void);

	AMateria	&operator=(AMateria const &other);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);

protected:
	std::string _type;
};

#endif
