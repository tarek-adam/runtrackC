#include <stdio.h>

int main() {
    // Déclaration et initialisation des variables
    int a = 1, b = 2, c = 3;
    
    // Déclaration des pointeurs
    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;
    
    // Affichage des valeurs initiales des variables
    printf("Valeurs initiales :\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    
    // Modification des valeurs pointées par les pointeurs
    *ptrA = 10;
    *ptrB = 20;
    *ptrC = 30;
    
    // Affichage des nouvelles valeurs des variables
    printf("Nouvelles valeurs :\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    
    return 0;
}
