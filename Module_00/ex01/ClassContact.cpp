#include "ClassContact.hpp"

std::string Contact::_field_names[] = {
    "First Name",
    "Last Name",
    "Nickname",
    "Phone Number",
    "Darkest Secret"
};

Contact::Contact(void) {}
Contact::~Contact(void) {}

void	Contact::new_contact(int index) {
    this->_index = index;
    for (int i = 0; i < NBR_FIELDS; i++) {
        while (this->_fields[i] == "") {
            std::cout << Contact::_field_names[i] << ":\t";
            std::getline(std::cin, this->_fields[i]);
            if (this->_fields[i] == "")
                std::cout << "Empty field. Try again." << std::endl;
        }
    }
    std::cout << "The contact has been added." << std::endl;
}

void	Contact::change_index(void) {
	this->_index--;
}

void	Contact::clear_fields(void) {
	for (int i = 0; i < NBR_FIELDS; i++)
		this->_fields[i].clear();
}

void	Contact::fill_fields(void) const {
    std::cout << "|" << std::setw(10) << this->_index << "|";
    for (int i = 0; i < 3; i++) {
        if (this->_fields[i].length() > 10)
            std::cout << _fields[i].substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << this->_fields[i] << "|";
    }
    std::cout << std::endl;
}

void	Contact::display_entry(void) const {
    for (int i = 0; i < NBR_FIELDS; i++) {
        std::cout << Contact::_field_names[i] << ":\t";
        std::cout << this->_fields[i] << std::endl;
    }
}