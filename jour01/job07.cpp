#include <iostream>  // Include the standard iostream library

int main() {
    int num;  // Declare a variable to store the user's input

    // Prompt the user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Check if the number is even or odd using the modulus operator
    if (num % 2 == 0) {
        // If the remainder when num is divided by 2 is 0, the number is even
        std::cout << num << " is even." << std::endl;
    } else {
        // Otherwise, the number is odd
        std::cout << num << " is odd." << std::endl;
    }

    return 0;  // Return 0 to indicate successful program termination
}
