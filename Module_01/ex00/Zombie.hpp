#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <ctime>

class Zombie {

public:

	Zombie(std::string name = "Default Zombie");
	~Zombie(void);

	void	announce(void);

private:

	std::string	_name;
};

Zombie*	newZombie( std::string name );
void 	randomChump( std::string name );

#endif