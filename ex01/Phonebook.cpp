#include "Phonebook.hpp"

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact(std::string firstName, std::string lastName, std::string phone) {
    int index = contactCount % 8;
    contacts[index].setContact(firstName, lastName, phone);
    contactCount++;
}

void PhoneBook::displayContacts() const {
    for (int i = 0; i < contactCount; i++) {
        std::cout << i << ": " << contacts[i].getSummary() << std::endl;
    }
}

void PhoneBook::displayContactDetails(int index) const {
    if (index >= 0 && index < contactCount) {
        contacts[index].displayContact();
    }
}