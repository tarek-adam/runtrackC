#include <iostream>

using namespace std;

int main() {
    int i = 0, n, som = 0;

    // Utilisation d'une boucle do ... while
    do {
        cout << "Donnez un entier : ";
        cin >> n;
        som += n;
        i++; // Incrémente la variable de boucle
    } while (i < 4);

    // Affichage de la somme
    cout << "Som : " << som << endl;

    return 0;
}
