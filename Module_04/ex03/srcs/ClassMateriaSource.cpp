#include "ClassMateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; ++i)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other) {
	for (int i = 0; i < 4; ++i) {
		if (other.getMateria(i))
			_materias[i] = other.getMateria(i)->clone();
		else 
			_materias[i] = NULL;
	}
}


MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i)
		if (_materias[i])
			delete _materias[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other) {
	if (this != &other) {
		this->~MateriaSource();
		for (int i = 0; i < 4; ++i) {
			if (other.getMateria(i))
				_materias[i] = other.getMateria(i)->clone();
			else 
				_materias[i] = NULL;
		}
	}
	return *this;
}

AMateria const	*MateriaSource::getMateria(int idx) const {
	if (idx < 0 || idx > 3)
        return NULL;
	return _materias[idx];
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materias[i] == NULL) {
			_materias[i] = materia;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materias[i] && type == _materias[i]->getType())
			return _materias[i]->clone();
	}
	return (NULL);
}
 