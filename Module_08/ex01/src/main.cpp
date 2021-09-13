#include "span.hpp"


int	main() {
	Span sp(5);
	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(115);
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << "\n===================== shortestSpan =================\n";
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "===================== longestSpan ==================\n";
		std::cout << sp.longestSpan() << std::endl;	
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n*********************** Range ****************************\n";
	Span spanRange = Span(100000);
	std::vector<int> vect;
	for (int i = 0; i < 100000; i++)
		vect.push_back(i);
	vect[42] = 2147483647;
	vect[404] = -2147483648;
	try {
		spanRange.addNumber(vect.begin(), vect.end());
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << "\n===================== shortestSpan =================\n";
		std::cout << spanRange.shortestSpan() << std::endl;
		std::cout << "===================== longestSpan ==================\n";
		std::cout << spanRange.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n*********************** Range 2 ****************************\n";
		Span spanRange2(50000);
	try {
		spanRange2.addNumber(1, 5000);
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << "\n===================== shortestSpan =================\n";
		std::cout << spanRange2.shortestSpan() << std::endl;
		std::cout << "===================== longestSpan ==================\n";
		std::cout << spanRange2.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}