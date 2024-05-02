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

// Tous les entiers de 1 à 9 sont narcissiques.
// Les dix termes suivants de la suite des 88 nombres narcissiques (suite A005188 de l'OEIS) sont 153, 370, 371, 407, 1 634, 8 208, 9 474, 54 748, 92 727 et 93 084.

//     153 = 1 3 + 5 3 + 3 3 {\displaystyle 153=1^{3}+5^{3}+3^{3}}.
//     93084 = 9 5 + 3 5 + 0 5 + 8 5 + 4 5 {\displaystyle 93084=9^{5}+3^{5}+0^{5}+8^{5}+4^{5}}.