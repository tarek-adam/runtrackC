#include <iostream>  // Include the standard iostream library

int main() {
    double num1, num2;  // Declare variables to store the input numbers

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the sum of the two numbers
    double sum = num1 + num2;

    // Display the sum of the two numbers
    std::cout << "The sum of the two numbers is: " << sum << std::endl;

    return 0;  // Return 0 to indicate successful program termination
}
