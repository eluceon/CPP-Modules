#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP
# include <iostream>

class Animal {

public:
    Animal(void);
    Animal(std::string type);
	Animal(Animal const &other);
    virtual ~Animal(void);

	Animal	&operator=(Animal const &other);

    virtual void    makeSound(void) const;
    std::string const &getType(void) const;

protected:
    std::string _type;
};

#endif