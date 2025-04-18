#include "Phonebook.hpp"

void displayMenu() {
    std::cout << "Phonebook\n" << std::endl;
    std::cout << "ADD - add a new contact" << std::endl;
    std::cout << "SEARCH - show the list of contacts" << std::endl;
    std::cout << "EXIT - exit the program\n" << std::endl;
    std::cout << "Choose an option: " << std::endl;
}

int main() 
{
    PhoneBook phonebook;
    
    std::string command;
    while (true) {
        std::system("clear");
        displayMenu();
        std::getline(std::cin, command);
        
        std::system("clear");
        if (std::cin.eof())
            break;
        if (command == "ADD") {
            std::string firstName, lastName, phone, nickname, darkestSecret;
            phonebook.addContact(firstName, lastName, phone, nickname, darkestSecret);
        } else if (command == "SEARCH") phonebook.displayContacts();
        else if (command == "EXIT") {
            break;
        }
        else {
            std::cout << "\n❌ Invalid command. Please enter ADD, SEARCH or EXIT.\n" << std::endl;
            std::cout << "Press enter to continue...";
            std::cin.get();
        }
    }
    std::cout << "Exiting...\n" << std::endl; 
    std::cout << "Goodbye!" << std::endl;
    sleep(2);
    std::system("clear");
    return 0;
}