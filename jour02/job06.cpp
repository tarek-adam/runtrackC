#include <iostream>
using namespace std;

int main (){

int n;

cout << "intege an integer number: "<< endl;
cin >> n;

for ( int i = 1;  i <= n; i++)
    {
        if( i % 3 == 0 && i % 5 == 0 ){
            cout << i << " multiple of 3 and multiple of 5"<< endl;
        }
   if( i % 3 == 0  ){
            cout << i << " multiple of 3 "<< endl;
        }
   if( i % 5 == 0 ){
            cout << i << " multiple of 5"<< endl;
        }
    }


}