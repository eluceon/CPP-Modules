#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap 
{

public:
	FragTrap(std::string const &name = "Noname");
	FragTrap(FragTrap const &other);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &other);

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	highFivesGuys(void);
};

#endif