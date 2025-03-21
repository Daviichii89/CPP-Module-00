#include "Phonebook.hpp"

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact(std::string firstName, std::string lastName, std::string phone) {
    std::cout << "Add a new contact" << std::endl;
    std::cout << "-----------------\n" << std::endl;
    std::cout << "Enter first name: ";
    std::cin >> firstName;
    std::cout << "Enter last name: ";
    std::cin >> lastName;
    std::cout << "Enter phone number: ";
    std::cin >> phone;

    int index = contactCount + 1;
    contacts[index].setContact(firstName, lastName, phone);
    contactCount++;

    std::cout << "\n\nContact added successfully!" << std::endl;
    std::cout << "Press enter to continue...";
    std::cin.ignore();
    std::cin.get();
}

void PhoneBook::displayContacts() const {
    int count = contactCount;
    int index;
    if (count == 0) {
        std::cout << "No contacts found." << std::endl;
        std::cout << "\n\nPress enter to continue...";
        std::cin.ignore();
        std::cin.get();
        return;
    }
    std::cout << "Contacts" << std::endl;
    std::cout << "--------\n" << std::endl;
    std::cout << "Nº | Name" << std::endl;
    std::cout << "---------" << std::endl;
    for (int i = 1; i < contactCount + 1; i++) {
        std::cout << i << "  | " << contacts[i].getSummary() << std::endl;
    }
    std::cout << "\n\nSelect a contact: ";
    std::cin >> index;

    std::system("clear");
    displayContactDetails(index);
    std::cout << "\n\nPress enter to continue...";
    std::cin.ignore();
    std::cin.get();
}

void PhoneBook::displayContactDetails(int index) const {
    if (index > 0 && index < contactCount + 1) {
        contacts[index].displayContact();
    } else {
        std::cout << "❌ Invalid contact." << std::endl;
    }
}