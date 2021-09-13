#include "ClassPhonebook.hpp"

int Phonebook::_nb_contacts = 0;

Phonebook::Phonebook(void) {}
Phonebook::~Phonebook(void) {}

void	Phonebook::add_contact(void) {
    if (Phonebook::_nb_contacts < NBR_CONTACTS) {
        this->_contacts[Phonebook::_nb_contacts].new_contact(Phonebook::_nb_contacts + 1);
		++Phonebook::_nb_contacts;
    }
    else {
		for (int i = 1; i < NBR_CONTACTS; i++) {
			this->_contacts[i - 1] = this->_contacts[i];
			this->_contacts[i-1].change_index();
		}
		this->_contacts[7].clear_fields();
		this->_contacts[7].new_contact(Phonebook::_nb_contacts);
	}
}

void	Phonebook::search_contact(void) const {
    std::string entry;

    if (Phonebook::_nb_contacts > 0) {
        std::cout << "\n|     Index|First name| Last name|  Nickname|" << std::endl;
        for (int i = 0; i < Phonebook::_nb_contacts; i++)
            this->_contacts[i].fill_fields();
        std::cout << "\nEnter the index of the desired entry." << std::endl;
        while (1) {
            std::getline(std::cin, entry);
            if (entry.length() == 1 && std::atoi(entry.c_str()) > 0
                && std::atoi(entry.c_str()) <= Phonebook::_nb_contacts)
                break ;
            std::cout << "Wrong index. Try again." << std::endl;
        }
        this->_contacts[std::atoi(entry.c_str()) - 1].display_entry();
    }
    else
        std::cout << "Your phonebook is empty." << std::endl;
}