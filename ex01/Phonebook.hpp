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
    int contactCount;

public:
    PhoneBook();
    void addContact(std::string firstName, std::string lastName, std::string phone, std::string nickname, std::string darkestSecret);
    void displayContacts();
    void displayContactDetails(int index);
};

#endif
