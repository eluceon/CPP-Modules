#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <limits>
# include <cmath>
#include <iostream>

# define RED_COLOR		"\033[0;31m"
# define GREEN_COLOR	"\033[0;32m"
# define RESTORE_COLOR	"\033[0;0m"

class Converter {
	public:
		Converter();
		Converter(const Converter &other);
		~Converter();

		Converter	&operator=(const Converter &other);

		double	strToD(const char *str);
		int		toInt(double dNbr);
		float	toFloat(double dNbr);
		char	toChar(double dNbr);

};

#endif