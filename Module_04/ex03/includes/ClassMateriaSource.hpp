#ifndef CLASSMATERIASOURCE_HPP
# define CLASSMATERIASOURCE_HPP

# include "ClassAMateria.hpp"
# include "ClassIMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	virtual ~MateriaSource();

	MateriaSource &operator=(MateriaSource const &other);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
	AMateria const	*getMateria(int index) const;

private:
	AMateria *_materias[4];
};

#endif