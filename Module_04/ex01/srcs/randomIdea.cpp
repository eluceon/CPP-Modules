#include "randomIdea.hpp"

std::string	randomIdea() {
	std::string str;
	int			len;
	
	len = std::rand() % 5 + 3;
	str += (char)std::toupper((char)(std::rand() % 26 + 97));
	for (int j = 0; j < len; j++) {
		str += ((char)(std::rand() % 26 + 97));
	}
	return str;
}