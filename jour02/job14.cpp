#include <iostream>
#include <cmath>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    int ArmNr, ArmNrA=0, ArmNrB=0, ArmNrC=0;
      int A = 0, B = 0, C = 0;

    cout << "Enter a number: "<< endl;
    cin >> ArmstrongNr;

        if( ArmstrongNr % 100> 1){

            A = ArmstrongNr  % 100 ;
            ArmNrA = (ArmstrongNr - A) / 100;

            B = A  % 10 ;
            ArmNrB = (A - B ) / 10 ;

            ArmNrC = B  ;
            cout << "b"  << B


        }

        if(ArmstrongNr == pow(ArmNrA,3) + pow(ArmNrB,3)+ pow(ArmNrC,3)){

            cout << "the nr: " << ArmstrongNr << " is perfect number "<< endl;
        }else{
            cout << "the nr: " << ArmstrongNr << " is NOT a perfect number "<< endl;   
        }

return 0;
}