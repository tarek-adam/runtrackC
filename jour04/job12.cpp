#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure pour représenter un membre du staff
struct Staff {
    char nom[50];
    char prenom[50];
};

// Structure pour représenter un étudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
};

int main() {
    // Déclaration et initialisation des membres du staff
    struct Staff alicia = {"Cordial", "Alicia"};
    struct Staff pierre = {"Malardier", "Pierre"};

    // Affichage des prénoms des membres du staff
    printf("Prénoms des membres du staff :\n");
    printf("%s\n", alicia.prenom);
    printf("%s\n", pierre.prenom);

    // Demander à l'utilisateur le nombre d'étudiants
    int nombreEtudiants;
    printf("Entrez le nombre d'etudiants : ");
    scanf("%d", &nombreEtudiants);

    // Allocation dynamique de mémoire pour le tableau d'étudiants
    struct Etudiant *etudiants = (struct Etudiant *)malloc(nombreEtudiants * sizeof(struct Etudiant));

    // Saisie du nom et prénom de chaque étudiant
    for (int i = 0; i < nombreEtudiants; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", etudiants[i].nom);
        printf("Prenom : ");
        scanf("%s", etudiants[i].prenom);
    }

    // Affichage des prénoms des étudiants
    printf("\nPrénoms des étudiants :\n");
    for (int i = 0; i < nombreEtudiants; i++) {
        printf("%s\n", etudiants[i].prenom);
    }

    // Libération de la mémoire allouée dynamiquement
    free(etudiants);

    return 0;
}
