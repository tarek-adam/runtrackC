#include <iostream>
#include <string>

using namespace std;

// Function to check if a character is a digit
bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

// Function to validate if the input matches the format "XXhXX"
bool validateTimeFormat(const string& input) {
    // Check if the input length is 5 (XXhXX)
    if (input.length() != 5) {
        return false;
    }
    // Check the format: XXhXX
    if (isDigit(input[0]) && isDigit(input[1]) && 
        input[2] == 'h' && 
        isDigit(input[3]) && isDigit(input[4])) {
        return true;
    }
    return false;
}

int main() {
    // Ask the user to input a time
    cout << "Please enter a time in the format XXhXX: ";
    string userInput;
    cin >> userInput;
    
    // Validate the input
    if (validateTimeFormat(userInput)) {
        cout << "The input is a valid time in the format XXhXX." << endl;
    } else {
        cout << "The input is not a valid time in the format XXhXX." << endl;
    }

    return 0;
}
