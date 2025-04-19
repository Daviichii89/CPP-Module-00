#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>

int isDigitsOnly(const std::string& str);
void readAndFill(std::string prompt, std::string& field, bool isPhoneNumber = false);
std::string substringField(const std::string& str, size_t width = 10);

#endif