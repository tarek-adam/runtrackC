#include <iostream>  // Include the standard iostream library

int main() {
    int N;  // Declare an integer variable to store the number of repetitions

    // Prompt the user to enter the value of N
    std::cout << "Enter the number of times to print 'Hello World': ";
    std::cin >> N;  // Read the value of N from the user

    // Loop while N is not equal to 0
    while (N != 0) {
        std::cout << "Hello World" << std::endl;  // Print the message "Hello World"
        N--;  // Decrement N by 1 after each iteration
    }

    return 0;  // Return 0 to indicate successful program termination
}
