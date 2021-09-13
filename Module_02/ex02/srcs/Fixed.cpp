#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(int const int_value) {
	this->_value = int_value * (1 << Fixed::_fractional_bits);
}

Fixed::Fixed(float const float_value) {
	this->_value = static_cast<int>(roundf(float_value * (1 << Fixed::_fractional_bits)));
}

Fixed::~Fixed(void) {}

Fixed::Fixed(Fixed const &other) {
	*this = other;
}
int		Fixed::toInt( void ) const {
	return this->_value / (1 << Fixed::_fractional_bits);
}

float	Fixed::toFloat( void ) const {
	return this->_value / static_cast<float>(1 << Fixed::_fractional_bits);

}

int		Fixed::getRawBits(void) const {
	return this->_value;
}

void 	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}


Fixed	&Fixed::operator=(Fixed const &other) {
	if (this != &other) {
		this->_value = other._value;
	}
	return *this;
}

bool	Fixed::operator>(const Fixed &other) {
	return this->_value > other._value;
}

bool	Fixed::operator<(const Fixed &other) {
	return this->_value < other._value;
}

bool	Fixed::operator>=(const Fixed &other) {
	return this->_value >= other._value;
}

bool	Fixed::operator<=(const Fixed &other) {
	return this->_value < other._value;
}

bool	Fixed::operator==(const Fixed &other) {
	return this->_value == other._value;
}

bool	Fixed::operator!=(const Fixed &other) {
	return this->_value != other._value;
}

Fixed	Fixed::operator+(const Fixed &other) {
	Fixed	result;

	result.setRawBits(this->_value + other._value);
	return result;
}

Fixed	Fixed::operator-(const Fixed &other) {
	Fixed	result;

	result.setRawBits(this->_value - other._value);
	return result;
}

Fixed	Fixed::operator*(const Fixed &other) {
	Fixed	result;
	
	result.setRawBits(this->_value * other._value
		/ (1 << Fixed::_fractional_bits));
	return result;
}

Fixed	Fixed::operator/(const Fixed &other) {
	Fixed	result;
	
	if (other._value == 0) {
		std::cerr << "Division by zero is not allowed!" << std::endl;
		return other;
	}
	result.setRawBits(static_cast<long long>(this->_value) * (1 << Fixed::_fractional_bits)
		/ other._value);
	return result;
}

std::ostream&	operator<<(std::ostream &out, Fixed const &fixed) {
	out << fixed.toFloat();
	return out;
}

Fixed&	Fixed::operator++() {
	++this->_value;
	return *this;
}

Fixed&	Fixed::operator--() {
	--this->_value;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	++this->_value;
	return	tmp;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	--this->_value;
	return	tmp;
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2) {
	return f1 < f2 ? f1 : f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	return static_cast<Fixed>(f1) < static_cast<Fixed>(f2) ? f1 : f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	return static_cast<Fixed>(f1) > static_cast<Fixed>(f2) ? f1 : f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	return f1 > f2 ? f1 : f2;
}
