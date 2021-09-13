#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void    Karen::debug(void) {
    std::cerr << "I love to get extra bacon for my " <<
        "7XL-double-cheese-triple-pickle-special-ketchup burger. " <<
        "I just love it!" << std::endl;
}

void    Karen::info(void) {
    std::cerr << "I cannot believe adding extra bacon cost more money. " <<
        "You don’t put enough! " <<
        "If you did I would not have to ask for it!" << std::endl;
}

    void complain(std::string level);
void    Karen::warning(void) {
    std::cerr << "I think I deserve to have some extra bacon for free. " <<
        "I’ve been coming here for years and you just started working " <<
        "here last month." << std::endl;
}

void    Karen::error(void) {
    std::cerr << "This is unacceptable, " <<
        "I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level) {
    std::string level_name[NB_LEVELS] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    void    (Karen::*f[NB_LEVELS])(void) = {
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error
    };

    for (int i = 0; i < NB_LEVELS; ++i) {
        if (!level.compare(level_name[i])) {
            (this->*f[i])();
            break ;
        }
    }
}
