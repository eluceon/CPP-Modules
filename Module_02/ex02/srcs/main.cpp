#include "Fixed.hpp"

	int	main(void) {
		
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a:\t" << a << std::endl;
	std::cout << "++a:\t" << ++a << std::endl;
	std::cout << "a:\t" << a << std::endl;
	std::cout << "a++:\t" << a++ << std::endl;
	std::cout << "a:\t"<< a << std::endl;

	std::cout << "b:\t"<< b << std::endl;

	std::cout << "max(a, b):\t" << Fixed::max( a, b ) << std::endl;

	//My tests
	std::cout << "\nMy tests:\n" << std::endl;
	Fixed c;
	c = a;
	std::cout << "c = a:\t" << c << std::endl;
	Fixed	x(7.25f);
	Fixed	y(-1);
	std::cout << "x:\t" << x << std::endl;
	std::cout << "y:\t" << y << std::endl;
	std::cout << "min(x, y):\t" << Fixed::min( x, y ) << std::endl;
	std::cout << "max(x, y):\t" << Fixed::max( x, y ) << std::endl;
	std::cout << "x + y:\t" << x + y << std::endl;
	std::cout << "x - y:\t" << x - y << std::endl;
	std::cout << "x * y:\t" << x * y << std::endl;
	std::cout << "x / y:\t" << x / y << std::endl;
	std::cout << "y / x:\t" << y / x << std::endl;
	std::cout << "x++:\t" << x++ << std::endl;
	std::cout << "x:\t" << x << std::endl;
	std::cout << "--y:\t" << --y << std::endl;


	return 0;
}