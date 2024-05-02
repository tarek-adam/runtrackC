#include <iostream>
#include <cmath>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    int ArmstrongNr, ArmstrongNrA=0, ArmstrongNrB=0, ArmstrongNrC=0, ArmstrongNrD=0, ArmstrongNrE=0;
      int A = 0, B = 0, C = 0, D = 0, E = 0;

    cout << "Enter a number: "<< endl;
    cin >> ArmstrongNr;

        if( ArmstrongNr % 10000> 1){

            A = ArmstrongNr  % 10000 ;
            ArmstrongNrA = (ArmstrongNr - A) / 10000  ;

            B = A  % 1000 ;
            ArmstrongNrB = (ArmstrongNrA - B ) / 1000 ;

            C = B  % 100 ;
            ArmstrongNrC = (ArmstrongNrB - C) / 100;

            D = C  % 10 ;
            ArmstrongNrD = (ArmstrongNrC - D) / 10  ;

            E = D  % 10;
            ArmstrongNrE = ArmstrongNrD - E ;


        }

        if(ArmstrongNr == pow(ArmstrongNrA,5) + pow(ArmstrongNrB,5)+ pow(ArmstrongNrC,5) + pow(ArmstrongNrD,5) + pow(ArmstrongNrE,5) ){

            cout << "the nr: " << ArmstrongNr << " is perfect number "<< endl;
        }else{
            cout << "the nr: " << ArmstrongNr << " is not a perfect number "<< endl;   
        }

return 0;
}