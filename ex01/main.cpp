#include "Phonebook.hpp"
#include <iostream>

void displayMenu() {
    std::cout << "Phonebook" << std::endl;
    std::cout << "1. Add a new contact" << std::endl;
    std::cout << "2. Search a contact" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "Choose an option: ";
}

int main() 
{
    PhoneBook phonebook;
    
    int command;
    while (true) {
        std::system("clear");
        displayMenu();
        std::cin >> command;

        if ((command < 1 || command > 4) && std::cin.fail()) {
            std::cin.clear();
            std::cout << "❌ Invalid command. Please enter a number between 1 and 4." << std::endl;
            continue;
        }

        switch (command) {
            case 1: {
                std::system("clear");
                std::string firstName, lastName, phone;
                std::cout << "Enter first name: ";
                std::cin >> firstName;
                std::cout << "Enter last name: ";
                std::cin >> lastName;
                std::cout << "Enter phone number: ";
                std::cin >> phone;
                phonebook.addContact(firstName, lastName, phone);
                std::cout << "Contact added successfully!" << std::endl;
                std::system("clear");
                break;
            }
            case 2: {
                std::system("clear");
                phonebook.displayContacts();
                int index;
                std::cout << "Enter the index of the contact: ";
                std::cin >> index;
                phonebook.displayContactDetails(index);
                break;
            }
            case 3: {
                std::cout << "Exiting..." << std::endl;
                break;
            }
            default:
                std::cout << "❌ Invalid command. Please enter a number between 1 and 3." << std::endl;
                break;
        }
    }
    std::cout << "Goodbye!" << std::endl;
    std::cin.clear();
    return 0;
}