#include <iostream>  // Include the standard iostream library

int main() {
    int n, m;  // Declare variables to store the input integers

    // Prompt the user to enter the first integer
    std::cout << "Enter the first integer (n): ";
    std::cin >> n;

    // Prompt the user to enter the second integer
    std::cout << "Enter the second integer (m): ";
    std::cin >> m;

    // Display the integers before the swap
    std::cout << "Before swap: n = " << n << ", m = " << m << std::endl;

    // Swap the contents of n and m using a temporary variable
    int temp = n;
    n = m;
    m = temp;

    // Display the integers after the swap
    std::cout << "After swap: n = " << n << ", m = " << m << std::endl;

    return 0;  // Return 0 to indicate successful program termination
}
