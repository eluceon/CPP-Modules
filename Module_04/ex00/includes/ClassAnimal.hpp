#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP
# include <iostream>

class Animal {

public:
    Animal(void);
	Animal(Animal const &other);
    virtual ~Animal(void);

	Animal	&operator=(Animal const &other);

    virtual void    makeSound(void) const;
    std::string const &getType(void) const;

protected:
    std::string _type;
};

class WrongAnimal {

public:
    WrongAnimal(void);
	WrongAnimal(WrongAnimal const &other);
    virtual ~WrongAnimal(void);

	WrongAnimal	&operator=(WrongAnimal const &other);

    void    makeSound(void) const;
    const std::string &getType(void) const;

protected:
    std::string _type;
};


#endif