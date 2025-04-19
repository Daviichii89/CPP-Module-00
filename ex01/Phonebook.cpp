#include "Phonebook.hpp"

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact(std::string firstName, std::string lastName, std::string phone, std::string nickname, std::string darkestSecret) {

    std::cout << "Add a new contact" << std::endl;
    std::cout << "-----------------\n" << std::endl;
    readAndFill("Enter firstname: ", firstName);
    readAndFill("Enter lastname: ", lastName);
    readAndFill("Enter phone number: ", phone, true);
    readAndFill("Enter nickname: ", nickname);
    readAndFill("Enter darkest secret: ", darkestSecret);
    static int index;
    if (contactCount < 8)
        contactCount++;
    if (index > 7)
        index = 0;
    contacts[index++].setContact(firstName, lastName, phone, nickname, darkestSecret);
    std::cout << "\n\nContact added successfully!" << std::endl;
    sleep(1);
}

void PhoneBook::displayContacts() {
    int count = contactCount;
    std::string input;
    if (count == 0) {
        std::cout << "No contacts found." << std::endl;
        std::cout << "\n\nPress enter to continue...";
        std::cin.get();
        return;
    }
    std::cout << "Contacts" << std::endl;
    std::cout << "--------\n" << std::endl;
    std::cout << "|"
              << std::setw(10) << "Index" << "|"
              << std::setw(10) << "FirstName" << "|"
              << std::setw(10) << "LastName" << "|"
              << std::setw(10) << "Nickname" << "|"
              << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    for (int i = 0; i < count; i++) 
        contacts[i].getSummary(i, 10);

    std::cout << "\n\nSelect a contact: ";
    
    std::getline(std::cin, input);
    if (std::cin.eof())
        return;

    std::system("clear");
    displayContactDetails(std::atoi(input.c_str()));
    std::cout << "\n\nPress enter to continue...";
    std::cin.get();
}

void PhoneBook::displayContactDetails(int index) {
    std::cout << "Contact Details" << std::endl;
    std::cout << "----------------\n" << std::endl;
    if (index > 0 && index <= contactCount) {
        contacts[index - 1].displayContact();
    } else {
        std::cout << "❌ Invalid contact." << std::endl;
    }
}