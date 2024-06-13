#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;  // Define the size of the array
    int T[SIZE];  // Declare an array to store 10 integers
    int count = 0;  // Initialize a counter for integers >= 5

    // Prompt the user to input 10 integers and store them in the array
    cout << "Please enter 10 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Integer " << i + 1 << ": ";
        cin >> T[i];
    }

    // Iterate over the array to count integers >= 5
    for (int i = 0; i < SIZE; i++) {
        if (T[i] >= 5) {
            count++;
        }
    }

    // Display the count of integers >= 5
    cout << "The number of integers greater than or equal to 5 is: " << count << endl;

    return 0;
}

