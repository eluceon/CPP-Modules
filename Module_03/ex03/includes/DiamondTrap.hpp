#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:

	DiamondTrap(std::string const &name = "Noname");
	DiamondTrap(DiamondTrap	const &other);
	~DiamondTrap();

	DiamondTrap&	operator=(DiamondTrap const &otehr);

	void	attack(std::string const &target);
	void 	whoAmI();

private:
	std::string	_name;
};



#endif