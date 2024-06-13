#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    printf("Entrez une chaîne de caractères : ");
    scanf("%99s", str);  // Utilisation de scanf pour lire la chaîne de caractères

    reverseString(str);
    
    printf("Chaîne inversée : %s\n", str);
    
    return 0;
}
