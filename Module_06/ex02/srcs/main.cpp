#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	Base	*basePtr;
	
	switch (rand() % 3 + 1)
    {
    case 1:
			basePtr = new A();
			break;
	case 2:
			basePtr = new B();
			break;
	case 3:
			basePtr = new C();
			break;
	}
	return basePtr;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Other" << std::endl;

}

void identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	} catch (std::exception &) {
	}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	} catch (std::exception &) {
	}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	} catch (std::exception &) {
	}
	std::cout << "Other" << std::endl;
}

int	main() {
	Base	*basePtr;

	std::cout << "===============Random test=================\n";
	srand(time(NULL));
	for (int i = 0; i < 5; ++ i) {
		std::cout << "Random #" << i + 1 << std::endl;
		basePtr = generate();
		identify(basePtr);
		identify(*basePtr);
		delete basePtr;
	}

	
	std::cout << "=============B, A, C tests================\n";
	std::cout << "Test B class\n";
	B	b;
	identify(&b);
	identify(b);
	std::cout << "Test A class\n";
	A	a;
	identify(&a);
	identify(a);
	std::cout << "Test C class" << std::endl;
	C	c;
	identify(&c);
	identify(c);
	return 0;
}