#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP


# include "ClassContact.hpp"

# define NBR_CONTACTS 8

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

	void	add_contact(void);
	void	search_contact(void) const;


private:
	Contact		_contacts[NBR_CONTACTS];
	static		int	_nb_contacts;
};

#endif