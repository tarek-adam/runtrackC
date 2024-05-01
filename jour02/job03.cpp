#include <iostream>

using namespace std;

int main() {
    int i = 0, n, som = 0;

    // Utilisation d'une boucle while
    while (i < 4) {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i++; // Incrémente la variable de boucle
    }

    // Affichage de la somme
    cout << "Som : " << som << endl;

    return 0;
}


