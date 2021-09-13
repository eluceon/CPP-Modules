#ifndef CLASSBRAIN_HPP
# define CLASSBRAIN_HPP

# include <iostream>
# include <string>

# define NBR_IDEAS 100

class Brain
{

public:
	Brain(void);
	Brain(Brain const &other);
	virtual ~Brain(void);

	Brain	&operator=(Brain const &other);

	std::string const	&getIdea(int index) const;
	void				setIdea(int index, std::string const &idea);



private:
	std::string _ideas[NBR_IDEAS];
};

#endif