#include <iostream>
#include "whatever.hpp"

int	main() {
	std::cout << "**********************INT**********************\n";
	int a = 10, b = 10, c = 11;
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "::min(a, c) = " << ::min(a, c) << std::endl;
	std::cout << "::min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "::max(a, c) = " << ::max(a, c) << std::endl;
	std::cout << "::max(a, b) = " << ::max(a, b) << std::endl;
	::swap(a, c);
	std::cout << "::swap(a, c): " << " a = " << a << ", c= " << c << std::endl;

	std::cout << "\n********************DOBLE**********************\n";

	double d = 8.78, e = 10.79;
	std::cout << "d = " << d << ", e = " << e << std::endl;
	std::cout << "::min(d, e) = " << ::min(d, e) << std::endl;
	std::cout << "::max(d, e) = " << ::max(d, e) << std::endl;
	::swap(d, e);
	std::cout << "::swap(d, e): " << " d = " << d << ", e = " << e << std::endl;

	std::cout << "\n********************CHAR**********************\n";
	char f = 'a', g = 'b';
	std::cout << "f = " << f << ", g = " << g << std::endl;
	std::cout << "::min(f, g) = " << ::min(f, g) << std::endl;
	std::cout << "::max(f, g) = " << ::max(f, g) << std::endl;
	::swap(f, g);
	std::cout << "::swap(f, g): " << " f = " << f << ", g = " << g << std::endl;

	std::cout << "\n********************FLOAT 8 vs 9**********************\n";
	std::cout << "::min(8.0f, 9.0f) = " << ::min(8.0f, 9.0f) << std::endl;
	std::cout << "::max(8.0f, 9.0f) = " << ::max(8.0f, 9.0f) << std::endl;

	std::cout << "\n********************STRING**********************\n";
	std::string str1 = "stringA", str2 = "stringAB";
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;
	std::cout << "::min(str1, str2) = " << ::min(str1, str2) << std::endl;
	std::cout << "::max(str1, str2) = " << ::max(str1, str2) << std::endl;
	::swap(str1, str2);
	std::cout << "::swap(str1, str2): " << " str1 = " << str1 << ", str2 = " << str2 << std::endl;

	return 0;
}