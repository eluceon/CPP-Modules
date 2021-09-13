#ifndef CLASSCAT_HPP
# define CLASSCAT_HPP

# include "ClassAnimal.hpp"
# include "ClassBrain.hpp"

class Cat : public Animal
{
public:
    Cat(void);
	Cat(Cat	const &other);
	virtual ~Cat(void);

	Cat	&operator=(Cat const &other);

    virtual void    makeSound(void) const;
	Brain const *getBrain(void) const;

private:
	Brain *_brain;
};

#endif