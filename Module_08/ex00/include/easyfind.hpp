#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
# include <iterator>

class NotFoundException : public std::exception {
public:
	virtual const char* what() const throw() {
		return ("Not found");
	}
};


template <typename T>
int	easyfind(T& container, int element) {
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), element);
	if (it == container.end())
		throw NotFoundException();
	return
		(std::distance(container.begin(), it));
}

#endif