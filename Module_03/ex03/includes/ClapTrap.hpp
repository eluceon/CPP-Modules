#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {

public:

	ClapTrap(const std::string &name = "Noname");
	ClapTrap(ClapTrap const &other);
	~ClapTrap();

	ClapTrap	&operator=(ClapTrap const &other);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string		&getName(void);
	unsigned int	getHitPoints(void);
	unsigned int	getEnergyPoints(void);
	unsigned int	getAttackDamage(void);

protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
};

#endif