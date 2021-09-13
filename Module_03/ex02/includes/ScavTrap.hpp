#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{

public:
	ScavTrap(std::string const &name = "Noname");
	ScavTrap(ScavTrap const &other);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &other);

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	guardGate();
};

#endif