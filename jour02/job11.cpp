#include <iostream>

using namespace std;

unsigned long long factorial(int n) {
    // Initialize the result to 1
    unsigned long long result = 1;
    
    // Calculate factorial using a for loop
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    // Return the result
    return result;
}

int main() {
    int n;
    
    // Ask the user to enter an integer
    cout << "Enter an integer: ";
    cin >> n;
    
    // Check that the number is non-negative
    if (n < 0) {
        cout << "The number must be non-negative." << endl;
        return 1;
    }
    
    // Calculate factorial
    unsigned long long result = factorial(n);
    
    // Display the result
    cout << n << "! = " << result << endl;
    
    return 0;
}
