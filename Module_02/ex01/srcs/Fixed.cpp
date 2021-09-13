#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const int_value) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = int_value * (1 << Fixed::_fractional_bits);
}

Fixed::Fixed(float const float_value) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(float_value * (1 << Fixed::_fractional_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
int		Fixed::toInt( void ) const {
	return this->_value / (1 << Fixed::_fractional_bits);
}

float	Fixed::toFloat( void ) const {
	return this->_value / (float)(1 << Fixed::_fractional_bits);

}


int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void 	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}


Fixed	&Fixed::operator=(Fixed const &src) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src) {
		this->_value = src._value;
	}
	return *this;
}

std::ostream&	operator<<(std::ostream &out, Fixed const &fixed) {
	out << fixed.toFloat();
	return out;
}