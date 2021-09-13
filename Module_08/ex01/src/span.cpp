#include "span.hpp"

Span::Span(){}
Span::Span(size_t n) : _max(n) {}
Span::Span(const Span &other) {
	*this = other;
}

Span &Span::operator=(const Span &other) {
	if (&other == this)
		return *this;
	this->_max = other._max;
	this->_vect = other._vect;
	return *this;
}

Span::~Span(){}

void	Span::display() {
	size_t	len = _vect.size();

	for (size_t i = 0; i < len; ++i) {
		std::cout << _vect[i] << " ";
	}
	std::cout << std::endl;
	
}

void	Span::addNumber(int nbr) {
	if (_vect.size() >= _max)
		throw OverflowException();
	_vect.push_back(nbr);
}

void Span::addNumber(int start, int end) {
	long	diff;
	diff = std::abs(end - start) + 1;

	if (diff + _vect.size() > _max)
		throw OverflowException();

	if (end > start) {
		for (int i = start; i <= end; ++i) {
			_vect.push_back(i);
		}
	} else {
		for (int i = start; i >= end; --i) {
			_vect.push_back(i);
		}
	}

}


size_t	Span::shortestSpan() {
	if (_vect.size() <= 1)
		throw FewValuesException();

	size_t	len = _vect.size() - 1;
	size_t	shortest = std::abs(_vect[0] - _vect[1]);

	for (size_t i = 0; i < len; ++i) {
		size_t	diff = std::abs(_vect[i] - _vect[i + 1]);
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

size_t	Span::longestSpan() {
	if (_vect.size() <= 1)
		throw FewValuesException();

	long max = *std::max_element(_vect.begin(), _vect.end());
	long min = *std::min_element(_vect.begin(), _vect.end());
	return (max - min);
}

const char* Span::OverflowException::what() const throw() {
	return "Add Number Overflow";
}

const char* Span::FewValuesException::what() const throw() {
	return "Few values for span";
}
