#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure pour stocker une note
typedef struct {
    char nom[50];
    char prenom[50];
    float note;
} Note;

// Fonction pour ajouter une note à la liste
void ajouterNote(Note **listeNotes, int *taille) {
    // Demander à l'utilisateur d'entrer les détails de la note
    printf("Nom de l'etudiant : ");
    scanf("%s", (*listeNotes)[*taille].nom);
    printf("Prenom de l'etudiant : ");
    scanf("%s", (*listeNotes)[*taille].prenom);
    printf("Note de l'etudiant : ");
    scanf("%f", &((*listeNotes)[*taille].note));

    // Augmenter la taille du tableau
    (*taille)++;
    *listeNotes = (Note *)realloc(*listeNotes, (*taille + 1) * sizeof(Note));
}

// Fonction pour afficher la liste de notes
void afficherListeNotes(Note *listeNotes, int taille) {
    printf("Liste de notes :\n");
    for (int i = 0; i < taille; i++) {
        printf("%s %s : %.2f\n", listeNotes[i].nom, listeNotes[i].prenom, listeNotes[i].note);
    }
}

// Fonction pour supprimer une note d'un étudiant
void supprimerNote(Note *listeNotes, int *taille) {
    char nom[50];
    char prenom[50];
    printf("Entrez le nom de l'etudiant a supprimer : ");
    scanf("%s", nom);
    printf("Entrez le prenom de l'etudiant a supprimer : ");
    scanf("%s", prenom);

    for (int i = 0; i < *taille; i++) {
        if (strcmp(listeNotes[i].nom, nom) == 0 && strcmp(listeNotes[i].prenom, prenom) == 0) {
            // Supprimer la note en décalant les éléments suivants
            for (int j = i; j < *taille - 1; j++) {
                listeNotes[j] = listeNotes[j + 1];
            }
            (*taille)--;
            printf("La note de %s %s a ete supprimee avec succes.\n", nom, prenom);
            return;
        }
    }
    printf("Aucune note trouvee pour %s %s.\n", nom, prenom);
}

// Fonction pour calculer et afficher la moyenne des notes
void afficherMoyenneNotes(Note *listeNotes, int taille) {
    if (taille == 0) {
        printf("Aucune note n'est disponible.\n");
        return;
    }
    float somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += listeNotes[i].note;
    }
    float moyenne = somme / taille;
    printf("La moyenne des notes est : %.2f\n", moyenne);
}

int main() {
    Note *listeNotes = NULL; // Initialiser la liste de notes à NULL
    int taille = 0; // Taille initiale de la liste

    int choix;
    do {
        // Affichage du menu
        printf("\nMenu :\n");
        printf("1. Ajouter une note\n");
        printf("2. Afficher la liste de notes\n");
        printf("3. Supprimer une note d'un etudiant\n");
        printf("4. Afficher la moyenne des notes\n");
        printf("5. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterNote(&listeNotes, &taille);
                break;
            case 2:
                afficherListeNotes(listeNotes, taille);
                break;
            case 3:
                supprimerNote(listeNotes, &taille);
                break;
            case 4:
                afficherMoyenneNotes(listeNotes, taille);
                break;
            case 5:
                // Libérer la mémoire allouée pour la liste de notes
                free(listeNotes);
                printf("Programme termine.\n");
                break;
            default:
                printf("Choix invalide. Veuillez choisir une option valide.\n");
        }
    } while (choix != 5);

    return 0;
