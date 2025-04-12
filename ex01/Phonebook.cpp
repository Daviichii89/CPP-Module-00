#include "Phonebook.hpp"

PhoneBook::PhoneBook() {}
static int contactCount;

void PhoneBook::addContact(std::string firstName, std::string lastName, std::string phone) {

    std::cout << "Add a new contact" << std::endl;
    std::cout << "-----------------\n" << std::endl;
    std::cout << "Enter first name: ";
    std::cin >> firstName;
    std::cout << "Enter last name: ";
    std::cin >> lastName;
    std::cout << "Enter phone number: ";
    std::cin >> phone;

    std::cout << "\n\n" << contactCount << std::endl;
    if (contactCount >= 8) {
        std::cout << "❌ Phonebook is full. Overwriting the first contact." << std::endl;
        contactCount = 0;
    } else {
        contactCount++;
        contacts[contactCount].setContact(firstName, lastName, phone);
    }
    std::cout << "\n\n despues del set " << contactCount << std::endl;

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
        // count++;
        return;
    }
    count++;
    std::cout << "Contacts" << std::endl;
    std::cout << "--------\n" << std::endl;
    std::cout << "Nº | Name" << std::endl;
    std::cout << "---------" << std::endl;
    for (int i = 1; i < count; i++) {
        std::cout << i << "  | " << contacts[i].getSummary() << std::endl;
    }
    std::cout << "\n\nSelect a contact: ";
    std::cin >> input;

    std::system("clear");
    displayContactDetails(input - '0');
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