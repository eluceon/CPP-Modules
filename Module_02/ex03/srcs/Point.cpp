#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::~Point() {}

Point::Point(Point const &other) : _x(other._x), _y(other._y) {}

Point::Point(Fixed const &x, Fixed const &y) : _x(x), _y(y) {};

Point::Point(float const x, float const y) : _x(x), _y(y) {};

Point	&Point::operator=(Point const &other) {
	(void)other;
	std::cout << "Can't assign to const attributes" << std::endl;
	return *this;
}

Fixed const	&Point::getX(void) const {
	return this->_x;
}

Fixed const	&Point::getY(void) const {
	return this->_y;
}