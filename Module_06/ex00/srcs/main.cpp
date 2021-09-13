#include "Converter.hpp"

int	main(int argc, char	*argv[]) {

	double	dNbr;
	float	fNbr;

	if (argc != 2) {
		std::cerr << RED_COLOR << "Invalid number of arguments" <<
			RESTORE_COLOR << std::endl;
		return 1;
	}
	Converter converter;

	dNbr = converter.strToD(argv[1]);

	try {
		std::cout << "char: " << converter.toChar(dNbr) << std::endl;
	} catch (const char* exception) {
		std::cerr << RED_COLOR << exception <<	RESTORE_COLOR << std::endl;
	}

	try {
		std::cout << "int: " << converter.toInt(dNbr) << std::endl;
	} catch (const char* exception) {
		std::cerr << RED_COLOR <<  exception <<	RESTORE_COLOR << std::endl;
	}

	fNbr = converter.toFloat(dNbr);
	if (fNbr - static_cast<int>(fNbr) == 0.0)
		std::cout << "float: " << fNbr << ".0f" << std::endl;
	else
		std::cout << "float: " << fNbr << "f" << std::endl;

	if (dNbr - static_cast<int>(dNbr) == 0.0)
		std::cout << "double: " << dNbr << ".0" << std::endl;
	else
		std::cout << "double: " << dNbr << std::endl;

	return 0;
}