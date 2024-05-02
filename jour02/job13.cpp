#include <cmath>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {

  int ArmstrongNr, ArmstrongNrA = 0, ArmstrongNrB = 0, ArmstrongNrC = 0;
  int A = 0, B = 0;

  cout << "Enter a number with three digits : " << endl;
  cin >> ArmstrongNr;

 
    A = ArmstrongNr % 100;
    ArmstrongNrA = (ArmstrongNr - A) / 100;
     
    B = A % 10;
    ArmstrongNrB = (A - B) / 10;

    ArmstrongNrC = B ;



  


  if (ArmstrongNr == pow(ArmstrongNrA, 3) + pow(ArmstrongNrB, 3) +
                         pow(ArmstrongNrC, 3) ) {

    cout << "the nr: " << ArmstrongNr << " is perfect number " << endl;
  } else {
    cout << "the nr: " << ArmstrongNr << " is not a perfect number " << endl;
  }

  return 0;
}