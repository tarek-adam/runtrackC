#include <iostream>  // Include the standard iostream library

int main() {
    int currentNumber;  // Declare a variable to store each integer as it is entered
    double total = 0;  // Declare a variable to store the running total

    // Prompt the user to enter five integers
    std::cout << "Enter five integers:" << std::endl;

    // Read five integers from the user and accumulate their total
    for (int i = 0; i < 5; i++) {
        std::cin >> currentNumber;
        total += currentNumber;
    }

    // Calculate the average of the five integers
    double average = total / 5;

    // Display the average
    std::cout << "The average of the five integers is: " << average << std::endl;

    return 0;  // Return 0 to indicate successful program termination
}
