#include "Phonebook.hpp"

PhoneBook::PhoneBook() {}

void PhoneBook::addContact(std::string firstName, std::string lastName, std::string phone) {

    std::cout << "Add a new contact" << std::endl;
    std::cout << "-----------------\n" << std::endl;
    std::cout << "Enter first name: ";
    std::cin >> firstName;
    std::cout << "Enter last name: ";
    std::cin >> lastName;
    std::cout << "Enter phone number: ";
    std::cin >> phone;

    static int index;
    if (contactCount > 8)
        contactCount++;
    if (index > 7)
        index = 0;
    contacts[index++].setContact(firstName, lastName, phone);
    std::cout << "\n\nContact added successfully!" << std::endl;
    std::cout << "Press enter to continue...";
    std::cin.ignore();
    std::cin.get();
}

void PhoneBook::displayContacts() const {
    int count = contactCount;
    char input;

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
    for (int i = 0; i < count; i++) {
        std::cout << i + 1 << "  | " << contacts[i].getSummary() << std::endl;
    }
    std::cout << "\n\nSelect a contact: ";
    std::cin >> input;
    std::system("clear");
    displayContactDetails(--input - '0');
    std::cout << "\n\nPress enter to continue...";
    std::cin.ignore();
    std::cin.get();
}

void PhoneBook::displayContactDetails(int index) const {
    if (index > 0 && index < contactCount) {
        contacts[index].displayContact();
    } else {
        std::cout << "❌ Invalid contact." << std::endl;
    }
}