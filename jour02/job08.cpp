#include <iostream>
using namespace std;

int main() {
  int a, b, i;

  cout << "Enter the first number: " << endl;
  cin >> a;
  i = a;

  cout << "Enter the second number: " << endl;
  cin >> b;
  cout << endl;

  while (i < b) {
    cout << i << endl;
    i++;
  }
  
  return 0;
}