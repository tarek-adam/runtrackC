#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int *ptrA = &a;
    int *ptrB = &b;
    
    printf("Avant l'échange :\n");
    printf("a = %d, b = %d\n", a, b);
    
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    
    printf("Après l'échange :\n");
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}
