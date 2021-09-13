#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <ctime>

# define NB_ZOMBIES 10

class Zombie {

public:

	Zombie(void);
	~Zombie(void);

	void	announce(void);
	void	set_name(std::string name);

private:

	std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif