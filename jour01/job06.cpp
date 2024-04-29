#include <iostream>  // Include the standard iostream library

int main() {
    int num;  // Declare a variable to store the user's input

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Display the multiplication table of the given number
    std::cout << "Multiplication table of " << num << ":" << std::endl;
    for (int i = 1; i <= 10; i++) {
        // Calculate and print the product of the current iteration number and the given number
        std::cout << num << " x " << i << " = " << num * i << std::endl;
    }

    return 0;  // Return 0 to indicate successful program termination
}
