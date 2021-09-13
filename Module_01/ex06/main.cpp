#include "Karen.hpp"

int get_value(const char *str) {
    std::string level_name[NB_LEVELS] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (int i = 0; i < NB_LEVELS; ++i) {
        if (!level_name[i].compare(str))
            return i;
    }
    return -1;
}

int main(int argc, char *argv[]) {
    Karen   karen;

    if (argc != 2) {
        std::cerr << "Need 1 argument" << std::endl;
        return 1;
    }
    switch (get_value(argv[1]))
    {
    case DEBUG:
        std::cerr << "[ DEBUG ]" << std::endl;
        karen.complain("DEBUG");
        std::cerr << std::endl;
    case INFO:
        std::cerr << "[ INFO ]" << std::endl;
        karen.complain("INFO");
        std::cerr << std::endl;
    case WARNING:
        std::cerr << "[ WARNING ]" << std::endl;
        karen.complain("WARNING");
        std::cerr << std::endl;
    case ERROR:
        std::cerr << "[ ERROR ]" << std::endl;
        karen.complain("ERROR");
        break;
    default:
        std::cerr << "[ Probably complaining about insignificant problems ]" <<
            std::endl;
    }
    return 0;
}