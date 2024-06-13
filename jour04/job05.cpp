#include <stdio.h>

// Déclaration de la structure Point
typedef struct {
    int x;
    int y;
} Point;

int main() {
    // Déclaration et initialisation d'une variable de type Point
    Point p = {0, 0};
    
    // Déclaration d'un pointeur vers la structure Point
    Point *ptrP = &p;
    
    // Modification des membres de la structure via le pointeur
    ptrP->x = 10;
    ptrP->y = 20;
    
    // Affichage des valeurs modifiées
    printf("Valeurs de la structure Point :\n");
    printf("x = %d, y = %d\n", ptrP->x, ptrP->y);
    
    return 0;
}
