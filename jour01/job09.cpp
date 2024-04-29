#include <iostream>  // Include the standard iostream library

int main() {
    int num1, num2, num3;  // Declare variables to store the input integers

    // Prompt the user to enter the first integer
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    // Prompt the user to enter the second integer
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Prompt the user to enter the third integer
    std::cout << "Enter the third integer: ";
    std::cin >> num3;

    // Determine the largest of the three integers
    int largest;
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Display the largest integer
    std::cout << "The largest integer is: " << largest << std::endl;

    return 0;  // Return 0 to indicate successful program termination
}
