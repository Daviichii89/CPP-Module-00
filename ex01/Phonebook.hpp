#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <unistd.h>

class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;

public:
    PhoneBook();
    void addContact(std::string firstName, std::string lastName, std::string phone);
    void displayContacts() const;
    void displayContactDetails(int index) const;
};

#endif
