#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout<< "Enter the first number: "<<endl;
    cin >> a;

    cout<< "Enter the second number: "<<endl;
    cin >> b;

    for(int i = a ;  i <= b ; i++){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}