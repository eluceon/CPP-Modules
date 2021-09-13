#ifndef CLASSCHARACTER_HPP
# define CLASSCHARACTER_HPP

#include "ClassAMateria.hpp"

class  Character : public ICharacter
{
public:
	Character();
	Character(std::string const &name);
	Character(Character const &other);
	virtual ~Character();

	Character &operator=(Character const &other);

	virtual std::string const &getName() const;
	AMateria const	*getMateria(int idx) const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

private:
	std::string	_name;
	AMateria	*_materias[4];
};

#endif