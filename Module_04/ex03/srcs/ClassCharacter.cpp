#include "ClassCharacter.hpp"

Character::Character(void) : _name("No name") {
	for (int i = 0; i < 4; ++i)
		_materias[i] = NULL;
}

Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < 4; ++i)
		_materias[i] = NULL;
}

Character::Character(Character const &other) {
	this->_name = other._name;
	for (int i = 0; i < 4; ++i) {
		if (other.getMateria(i))
			_materias[i] = other.getMateria(i)->clone();
		else 
			_materias[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
		if (_materias[i])
			delete _materias[i];
}

Character &Character::operator=(Character const &other) {
	if (this != &other) {
		this->~Character();
		this->_name = other._name;
		for (int i = 0; i < 4; ++i) {
			if (other.getMateria(i))
				_materias[i] = other.getMateria(i)->clone();
			else 
				_materias[i] = NULL;
		}
	}
	return *this;
}

std::string const &Character::getName() const {
	return _name;
}

AMateria const	*Character::getMateria(int idx) const {
	if (idx < 0 || idx > 3)
		return NULL;
	return _materias[idx];
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (_materias[i] == NULL) {
			_materias[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >=0 && idx <= 3 && _materias[idx])
		_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >=0 && idx <= 3 && _materias[idx])
		_materias[idx]->use(target);
}
