#include <stdio.h>

int main() {
    // Déclaration et initialisation de la variable number
    int number = 2019;
    
    // Déclaration du pointeur
    int *ptr;
    
    // Faire pointer le pointeur vers la variable number
    ptr = &number;
    
    // Afficher la valeur de number en utilisant le pointeur
    printf("La valeur de number est : %d\n", *ptr);

    return 0;
}
