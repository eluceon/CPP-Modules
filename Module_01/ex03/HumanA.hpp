#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	const Weapon &_weapon;
	std::string	_name;
	
public:
	HumanA(std::string const &name, const Weapon &weapon);
	~HumanA(void);

	void	attack(void) const;
};

#endif