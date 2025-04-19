#include "Utils.hpp"

int isDigitsOnly(const std::string& str) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

void readAndFill(std::string prompt, std::string& field, bool isPhoneNumber) {
    std::cout << prompt;
    std::getline(std::cin, field);
    if (std::cin.eof())
        return;
    if (isPhoneNumber)
        while (field.empty() || !isDigitsOnly(field)) {
            std::cout << "❌" << field << " must contain only digits and not be empty. Try again: ";
            std::getline(std::cin, field);
        }
    else 
        while (field.empty()) {
            std::cout << "❌" << field << " cannot be empty. Try again: ";
            std::getline(std::cin, field);
        }
}

std::string substringField(const std::string& str, size_t width) {
    std::string cleanStr = str;
    for (size_t i = 0; i < cleanStr.length(); ++i) {
        if (cleanStr[i] == '\t')
            cleanStr[i] = ' ';    
    }
    if (cleanStr.length() > width)
        return cleanStr.substr(0, width - 1) + ".";
    return cleanStr;
}