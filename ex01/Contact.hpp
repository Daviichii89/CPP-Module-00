#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;

public:
    Contact();
    void setContact(std::string fName, std::string lName, std::string phone);
    void displayContact() const;
    std::string getSummary() const;
};

#endif