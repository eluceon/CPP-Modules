#ifndef CLASSCAT_HPP
# define CLASSCAT_HPP

# include "ClassAnimal.hpp"

class Cat : public Animal
{
public:
    Cat(void);
	virtual ~Cat(void);

    virtual void    makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
	virtual ~WrongCat(void);

    void    makeSound(void) const;
};

#endif