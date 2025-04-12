#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>

class PhoneBook {
private:
    Contact contacts[8];

public:
    PhoneBook();
    void addContact(std::string firstName, std::string lastName, std::string phone);
    void displayContacts() const;
    void displayContactDetails(int index) const;
};

#endif
