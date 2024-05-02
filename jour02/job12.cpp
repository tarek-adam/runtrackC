#include <iostream>

int main() {
    int n;
    double harmonic_sum = 0.0;

    // Prompt the user to enter the value of n
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    // Check if the input is valid (n should be positive)
    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    // Calculate the sum of the harmonic series up to n terms
    for (int i = 1; i <= n; ++i) {
        harmonic_sum += 1.0 / i;
    }

    // Print the result
    std::cout << "The sum of the first " << n << " terms of the harmonic series is: " << harmonic_sum << std::endl;

    return 0;
}
