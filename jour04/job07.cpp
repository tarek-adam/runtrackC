#include <stdio.h>

int main() {
    // Déclaration et initialisation des variables
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    char caractere[] = "La Plateforme";

    // Affichage des adresses mémoire et des valeurs des variables
    printf("Adresse mémoire de la variable 'entier': %p, Valeur: %d\n", (void*)&entier, entier);
    printf("Adresse mémoire de la variable 'flottant': %p, Valeur: %.2f\n", (void*)&flottant, flottant);
    printf("Adresse mémoire de la variable 'reel': %p, Valeur: %.3lf\n", (void*)&reel, reel);
    printf("Adresse mémoire de la variable 'caractere': %p, Valeur: %s\n", (void*)&caractere, caractere);

    return 0;
}
