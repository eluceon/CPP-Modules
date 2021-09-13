#ifndef CLASSIMATERIASOURCE_HPP
# define CLASSIMATERIASOURCE_HPP

# include "ClassAMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif