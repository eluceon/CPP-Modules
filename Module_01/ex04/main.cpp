#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void	str_replace(std::string &line, size_t &find_pos,
					const size_t len, const std::string &str_replace) {
	line.erase(find_pos, len);
	line.insert(find_pos, str_replace);
}

void    replace(const char *file, const char *s1, const char *s2) {
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string 	str_old = s1;
	std::string 	str_new = s2;
	std::string		filename = file;

    ifs.open(file);
	if (!ifs.good()) {
		std::cerr << file <<" could not be opened for reading!" << std::endl;
		exit(EXIT_FAILURE);
	}
    ofs.open(filename.append(".replace"), std::ios::trunc);
	if (!ofs.good()) {
		std::cerr << "Could not create file for writing!" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string line;
	size_t		find_pos = 0;
	while (!ifs.eof())
	{
		std::getline(ifs, line);
		find_pos = 0;
		while (1) {
			find_pos = line.find(str_old, find_pos);
			if (find_pos == std::string::npos)
     	       break;
			str_replace(line, find_pos, str_old.length(), str_new);
			find_pos += str_new.length();
		}
		if (!ifs.eof())
			ofs << line << "\n";
	}
	ifs.close();
	ofs.close();
}

void	check_args(int argc, char *argv[])
{
	if (argc != 4) {
		std::cerr << "Wrong number of arguments. Use format:\n" <<
			"./replace [filename] [search_string] [replace_string]" <<
			std::endl;
		exit(EXIT_FAILURE);
	}
	if (!argv[1][0] || !argv[2][0]) {
		std::cerr << "Empty argument" << std::endl;
		exit(EXIT_FAILURE);
	}
}

int	main(int argc, char *argv[])
{
	check_args(argc, argv);
    replace(argv[1], argv[2], argv[3]);
    return 0;
}