#include <iostream>
using namespace std;

int main() {
  
  int a=6, b=9;
  int i;

  cout << "Enter the gaming number: " << endl;
  cin >> i;
  
  cout << endl;

if(a <= i && i <= b) {
                    cout << i << " is \a winner nr"<<endl;
                }else{cout << "better luck next try! " << endl; }
  
  return 0;
}