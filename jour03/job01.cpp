#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string phrase = "vive la plateforme !";
    
    // Convert the phrase to uppercase
    transform(phrase.begin(), phrase.end(), phrase.begin(), ::toupper);
    
    // Print the transformed phrase
    cout << phrase << endl;
    
    return 0;
}
