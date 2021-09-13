#include <iostream>
#include <map>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main() {
	std::list<int>		lst;
	std::vector<int>	vect;


	lst.push_back(-17);
	lst.push_back(118);
	lst.push_back(4);
	lst.push_back(917);

	vect.push_back(-17);
	vect.push_back(118);
	vect.push_back(4);
	vect.push_back(917);
	
	try {
		std::cout << easyfind(lst, -17) << std::endl;
		std::cout << easyfind(vect, 917) << std::endl;
		std::cout << easyfind(lst, -200) << std::endl;
	} catch (NotFoundException &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}


	
	return 0;
}