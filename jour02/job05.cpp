#include <iostream>
using namespace std;

int main(){

    double Evaluation;

cout << "Saisie une note entre 0 et 20: " << endl;
cin >> Evaluation ;

if (Evaluation > 10 )
        { cout << "Valide"<< endl;}
    else{ cout << "non valide" << endl;}

    return 0;
}