#include "Contact.hpp"

Contact::Contact() {}

void Contact::setContact(std::string fName, std::string lName, std::string phone) {
    firstName = fName;
    lastName = lName;
    phoneNumber = phone;
}

void Contact::displayContact() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
}

std::string Contact::getSummary() const {
    return firstName + " " + lastName;
}