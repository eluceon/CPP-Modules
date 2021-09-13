#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &other);
	Fixed(int const int_value);
	Fixed(float const float_value);

	~Fixed();

	Fixed	&operator=(Fixed const &other);

	bool	operator>(const Fixed &other);
	bool	operator<(const Fixed &other);
	bool	operator>=(const Fixed &other);
	bool	operator<=(const Fixed &other);
	bool	operator==(const Fixed &other);
	bool	operator!=(const Fixed &other);

	Fixed	operator+(const Fixed &other);
	Fixed	operator-(const Fixed &other);
	Fixed	operator*(const Fixed &other);
	Fixed	operator/(const Fixed &other);

	Fixed&	operator++();
    Fixed&	operator--();
	Fixed	operator++(int);
    Fixed	operator--(int);

	static Fixed		&min(Fixed &f1, Fixed &f2);
	static const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);
	static const Fixed	&max(const Fixed &f1, const Fixed &f2);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int					_value;
	static const int	_fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);


#endif