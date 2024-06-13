#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Création du tableau de fruits
    char *fruit[] = {"Pomme", "Banane", "Orange", "Fraise", "Kiwi"};

    // Affichage du contenu du tableau fruit
    printf("Contenu du tableau fruit :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, fruit[i]);
    }

    // Demander le nombre de fruits préférés de l'utilisateur
    int taille;
    printf("Entrez le nombre de fruits preferes : ");
    scanf("%d", &taille);

    // Allocation dynamique de mémoire pour le tableau favoris
    char **favoris = (char **)malloc(taille * sizeof(char *));

    // Demander à l'utilisateur d'entrer ses fruits préférés
    printf("Entrez vos %d fruits preferes :\n", taille);
    for (int i = 0; i < taille; i++) {
        favoris[i] = (char *)malloc(50 * sizeof(char)); // Allocation dynamique de mémoire pour chaque fruit
        scanf("%s", favoris[i]);
    }

    // Affichage du tableau favoris
    printf("Contenu du tableau favoris :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d. %s\n", i + 1, favoris[i]);
    }

    // Libération de la mémoire allouée dynamiquement
    for (int i = 0; i < taille; i++) {
        free(favoris[i]);
    }
    free(favoris);

    return 0;
}
