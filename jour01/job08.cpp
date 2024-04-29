#include <iostream>  // Include the standard iostream library

int main() {
    int year;  // Declare a variable to store the user's input

    // Prompt the user to enter a year
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Determine if the year is a leap year
    bool isLeapYear = false;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            // Check if the year is divisible by 400
            if (year % 400 == 0) {
                isLeapYear = true;
            }
        } else {
            isLeapYear =false;
        }
    }

    // Display the result
    if (isLeapYear) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;  // Return 0 to indicate successful program termination
}
