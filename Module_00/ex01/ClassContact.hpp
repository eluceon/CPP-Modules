#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>

# define NBR_FIELDS 5

class Contact {

public:
	Contact(void);
	~Contact(void);

	void	new_contact(int index);
	void	fill_fields(void) const;
	void	display_entry(void) const;
	void	clear_fields(void);
	void	change_index(void);


private:
	int					_index;
	static std::string	_field_names[NBR_FIELDS];
	std::string			_fields[NBR_FIELDS];
};

#endif