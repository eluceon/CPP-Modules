#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP

# include "ClassAnimal.hpp"

class Dog : public Animal
{
public:
    Dog(void);
	virtual	~Dog(void);

    virtual void	makeSound(void) const;
};


#endif