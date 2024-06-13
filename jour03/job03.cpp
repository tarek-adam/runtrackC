#include <iostream>
#include <string>

using namespace std;

int compareStrings(const string& str1, const string& str2) {
    // Compare the two strings
    if (str1 == str2) {
        return 0; // The strings are equal
    } else {
        return 1; // The strings are not equal
    }
}

int main() {
    // Strings to compare
    string string1 = "vive la plateforme !";
    string string2 = "vive la plateforme !";

    // Call the comparison function
    int comparisonResult = compareStrings(string1, string2);

    // Display the comparison result
    cout << "Comparison result: " << comparisonResult << endl;

    return 0;
}
