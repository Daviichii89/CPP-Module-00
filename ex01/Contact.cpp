#include "Contact.hpp"
#include "Utils.hpp"

Contact::Contact() {}

void Contact::setContact(std::string fName, std::string lName, std::string phone, std::string nick, std::string secret) {
    firstName = fName;
    lastName = lName;
    phoneNumber = phone;
    nickname = nick;
    darkestSecret = secret;
}

void Contact::displayContact() {
    std::cout << "First Name: " << firstName << std::endl
              << "Last Name: " << lastName << std::endl
              << "Phone Number: " << phoneNumber << std::endl
              << "Nickname: " << nickname << std::endl
              << "Darkest Secret: " << darkestSecret << std::endl;
}

void Contact::getSummary(int index, int width) {
    int newIndex = index + 1;
    std::cout << "|"
              << std::setw(width) << newIndex << "|"
              << std::setw(width) << substringField(firstName) << "|"
              << std::setw(width) << substringField(lastName) << "|"
              << std::setw(width) << substringField(nickname) << "|"
              << std::endl;
}