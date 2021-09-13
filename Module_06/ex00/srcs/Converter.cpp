#include "Converter.hpp"

Converter::Converter(){}
Converter::Converter(const Converter &) {}
Converter::~Converter() {}
Converter &Converter::operator=(const Converter &) {
	return *this;
}

double Converter::strToD(const char *str) {
	if (str[1] == '\0' && (str[0] < '0' || str[0] > '9'))
		return (static_cast<double>(str[0]));
	else
		return (atof(str));
}

int	Converter::toInt(double dNbr) {
	if (dNbr > std::numeric_limits<int>::max() ||
		dNbr < std::numeric_limits<int>::min() ||
		std::isnan(dNbr))
		throw "impossible";
	return static_cast<int>(dNbr);
}

char	Converter::toChar(double dNbr) {
	if (dNbr > std::numeric_limits<char>::max() ||
		dNbr < std::numeric_limits<char>::min() ||
		std::isnan(dNbr))
		throw "impossible";
	char c = static_cast<char>(dNbr);
	if (c < 32 || c > 126)
		throw "Non displayable";
	return c;
}

float	Converter::toFloat(double dNbr) {
	return static_cast<float>(dNbr);
}
