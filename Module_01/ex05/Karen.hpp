#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

# define NB_LEVELS 4

class Karen
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

public:
    Karen(void);
    ~Karen(void);

    void    complain(std::string level);
};

#endif