#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP

# include "ClassAnimal.hpp"
# include "ClassBrain.hpp"

class Dog : public Animal
{
public:
    Dog(void);
	Dog(Dog	const &other);
	virtual	~Dog(void);

	Dog	&operator=(Dog const &other);

    virtual void	makeSound(void) const;
	Brain const *getBrain(void) const;

private:
	Brain *_brain;
};

#endif