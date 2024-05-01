#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double number;

    while (true){
        cout << "Enter a positive real number :" << endl;
        cin >> number;

            if(number < 0){
                cout<< "Negative numbers are not allowed" << endl;
            } else {
                double sqrtValue = sqrt(number);
                cout << "Square number of: " << number << "  is: " << sqrtValue << endl; 
            }

            if (number == 0) {
            cout << "Program ended:" << endl; 
            break;
        }

    }

    return 0;
}