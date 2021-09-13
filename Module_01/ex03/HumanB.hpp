#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	const Weapon *_weapon;
	std::string	_name;

public:
	HumanB(std::string const &name);
	~HumanB(void);

	void	attack(void) const;
	void 	setWeapon(const Weapon &weapon);
};

#endif