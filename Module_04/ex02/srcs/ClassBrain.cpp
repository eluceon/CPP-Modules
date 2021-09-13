#include "ClassBrain.hpp"
#include "randomIdea.hpp"
#include <sstream>

Brain::Brain(void) {
	std::ostringstream tmp;
	for (int i = 0; i < NBR_IDEAS; ++i) {
		tmp << i;
		_ideas[i] = "Idea " + tmp.str() + " " + randomIdea();
		tmp.str("");
	}
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(Brain const &other) {
	*this = other;
	std::cout << "Brain constructor with other brain" << std::endl;
}

Brain &Brain::operator=(Brain const &other) {
	if (this != &other) {
		for (int i = 0; i < NBR_IDEAS; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return *this;
}

Brain::~Brain (void) {
	std::cout << "Brain destructor" << std::endl;
};

std::string const &Brain::getIdea(int index) const {
	if (index < 0 || index >= NBR_IDEAS) {
		std::cout << "Wrong index. Rerturn _ideas[0]" << std::endl;
		return _ideas[0];
	}
	return _ideas[index];
}

void	Brain::setIdea(int index, std::string const &idea) {
	_ideas[index] = idea;
}
