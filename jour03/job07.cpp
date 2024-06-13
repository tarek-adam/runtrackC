#include <iostream>

int main() {
    const int size = 10; // Define the size of the array
    int T[size]; // Declare an array to hold 10 integers

    // Prompt the user to enter 10 integers
    std::cout << "Please enter 10 integers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Enter integer " << (i + 1) << ": ";
        std::cin >> T[i];
    }

    // Initialize variables to track the maximum value and its index
    int maxIndex = 0; // Start with the first index
    int maxValue = T[0]; // Start with the first element

    // Find the index of the largest element in the array
    for (int i = 1; i < size; i++) {
        if (T[i] > maxValue) {
            maxValue = T[i];
            maxIndex = i;
        }
    }

    // Display the index of the largest element
    std::cout << "The index of the largest element is: " << maxIndex << std::endl;

    return 0;
}
