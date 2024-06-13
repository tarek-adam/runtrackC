#include <stdio.h>
#include <stdint.h> // Inclure cette bibliothèque pour utiliser intptr_t

int main() {
    // Initialisation du tableau avec les valeurs demandées
    // Utilisation d'un tableau de pointeurs vers void
    void *tableau[] = {(void*)(intptr_t)2019, "La Plateforme", (void*)(intptr_t)3.14, "Étudiants"};

    // Calcul du nombre d'éléments du tableau
    // Utilisation d'une constante plutôt que sizeof
    int taille = 4;

    // Affichage des adresses et des valeurs de chaque élément du tableau
    printf("Tableau :\n");
    for (int i = 0; i < taille; i++) {
        // Utilisation de %p pour afficher l'adresse
        printf("Adresse de l'élément %d : %p, ", i, (void*)&tableau[i]);
        // Conversion de la valeur à afficher en fonction du type de données
        if (i % 2 == 0) { // Si l'index est pair, affiche la valeur comme un entier ou un flottant
            // Utilisation de %lf pour afficher les valeurs flottantes
            printf("Valeur : %ld\n", (intptr_t)tableau[i]);
        } else { // Sinon, affiche la valeur comme une chaîne de caractères
            printf("Valeur : %s\n", (char*)tableau[i]);
        }
    }

    return 0;
}
